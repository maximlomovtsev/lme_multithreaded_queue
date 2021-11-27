#pragma once

#include <queue>
#include <condition_variable>

namespace mthread_queue
{

template<typename T>
class MThreadQueue
{
public:
    MThreadQueue() = default;
    ~MThreadQueue() = default;

    void Push(const T& item);

    T& Pop();

    bool Empty() const;

    std::size_t Size() const;

private:
    std::queue<T> queue_;
    std::mutex syncMutex_;
};

} // namespace mthread_queue