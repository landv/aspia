//
// PROJECT:         Aspia Remote Desktop
// FILE:            base/thread.h
// LICENSE:         See top-level directory
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#ifndef _ASPIA_BASE__THREAD_H
#define _ASPIA_BASE__THREAD_H

#include <atomic>
#include <condition_variable>
#include <mutex>
#include <thread>

#include "base/macros.h"

namespace aspia {

class Thread
{
public:
    Thread();
    virtual ~Thread() = default;

    // Starts the thread and waits for its real start
    void Start();

    // Signals the thread to exit in the near future.
    void StopSoon();

    // Signals the thread to exit and returns once the thread has exited.  After
    // this method returns, the Thread object is completely reset and may be used
    // as if it were newly constructed (i.e., Start may be called again).
    // Stop may be called multiple times and is simply ignored if the thread is
    // already stopped.
    void Stop();

    // Waits for thread to finish.
    void Join();

    // Returns true if the StopSoon method was called.
    bool IsStopping() const;

protected:
    virtual void Run() = 0;

private:
    void ThreadMain();

    std::thread thread_;

    enum class State { Starting, Started, Stopping, Stopped };

    std::atomic<State> state_;

    // True while inside of Run().
    bool running_;
    std::mutex running_lock_;
    std::condition_variable running_event_;

    DISALLOW_COPY_AND_ASSIGN(Thread);
};

} // namespace aspia

#endif // _ASPIA_BASE__THREAD_H
