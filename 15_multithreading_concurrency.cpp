// 15_multithreading_concurrency.cpp
// This file demonstrates multithreading in C++ using std::thread,
// along with synchronization using std::mutex, std::lock_guard, and std::condition_variable.
// Multiple threads wait for a signal and then safely update a shared counter.

#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
#include <vector>
#include <condition_variable>

using namespace std;

mutex mtx;                         // Mutex to protect shared data.
condition_variable cv;              // Condition variable for thread synchronization.
bool ready = false;                 // Flag to signal threads to start.
int sharedCounter = 0;              // A shared counter that threads will update.

void workerFunction(int id) {
    // Each worker thread waits until 'ready' is true.
    {
        unique_lock<mutex> lock(mtx);
        cv.wait(lock, [] { return ready; });
    }
    
    // After being signaled, each thread increments the shared counter 5 times.
    for (int i = 0; i < 5; i++) {
        {
            lock_guard<mutex> lock(mtx);
            sharedCounter++;
            cout << "Thread " << id << " incremented counter to " << sharedCounter << endl;
        }
        // Sleep briefly to simulate work and allow context switching.
        this_thread::sleep_for(chrono::milliseconds(100));
    }
}

int main() {
    cout << "Multithreading and Concurrency in C++" << endl;
    const int numThreads = 3;
    vector<thread> threads;
    
    // Create worker threads.
    for (int i = 0; i < numThreads; i++) {
        threads.push_back(thread(workerFunction, i + 1));
    }
    
    // Give threads time to start and wait on the condition variable.
    this_thread::sleep_for(chrono::milliseconds(500));
    
    // Signal all threads to start working.
    {
        lock_guard<mutex> lock(mtx);
        ready = true;
    }
    cv.notify_all();
    
    // Wait for all threads to finish.
    for (auto &t : threads) {
        if (t.joinable()) {
            t.join();
        }
    }
    
    cout << "Final shared counter value: " << sharedCounter << endl;
    
    return 0;
}
