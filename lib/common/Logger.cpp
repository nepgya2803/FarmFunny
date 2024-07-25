#include "Logger.hpp"

void Logger::LOG()
{
}

template <typename First, typename... Rest>
void Logger::LOG(First&& first, Rest&&... rest)
{
    std::cout << std::forward<First>(first) << std::endl;
    LOG(std::forward<Rest>(rest)...);
}