#include "mthread_queue.h"

namespace mthread_queue
{

template<typename T>
void MThreadQueue<T>::Push(const T& item)
{
    std::lock_guard<std::mutex> guard(syncMutex_);

    queue_.push(item);
}

template<typename T>
T& MThreadQueue<T>::Pop()
{
    std::lock_guard<std::mutex> guard(syncMutex_);

    const auto item = queue_.front();
    queue_.pop();
    return item;
}

template<typename T>
bool MThreadQueue<T>::Empty() const
{
    std::lock_guard<std::mutex> guard(syncMutex_);

    return queue_.empty();
}

template<typename T>
std::size_t MThreadQueue<T>::Size() const
{
    std::lock_guard<std::mutex> guard(syncMutex_);

    return queue_.size();
}

} // namespace mthread_queue