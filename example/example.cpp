#include <mthread_queue.h>

int main()
{
    mthread_queue::MThreadQueue<int> mQueue = {};

    constexpr auto itemCount = 10;
    for(auto i = 0; i < itemCount; ++i)
    {
        mQueue.Push(i);
    }

    for(auto i = 0; i < itemCount; ++i)
    {
        mQueue.Pop();
    }

    return 0;
}