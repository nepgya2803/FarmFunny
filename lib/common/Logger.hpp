#pragma once
#ifndef LOGGER_HPP
#define LOGGER_HPP
#include <iostream>
#include <utility>

namespace Logger
{
    void LOG();

    template <typename First, typename... Rest>
    void LOG(First&& first, Rest&&... rest);
} // namespace Logger

#endif // LOGGER_HPP