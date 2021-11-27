#include "mthread_queue.h"

namespace mthread_queue
{

template<typename T>
void MThreadQueue<T>::Push(const T& item)
{
    queue_.push(item);
}

template<typename T>
T& MThreadQueue<T>::Pop()
{
    const auto item = queue_.front();
    queue_.pop();
    return item;
}

template<typename T>
bool MThreadQueue<T>::Empty() const
{
    return queue_.empty();
}

template<typename T>
std::size_t MThreadQueue<T>::Size() const
{
    return queue_.size();
}

} // namespace mthread_queue