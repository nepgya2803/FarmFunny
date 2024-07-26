#pragma once
#ifndef LOGGER_HPP
#define LOGGER_HPP
#include <iostream>
#include <sstream>

namespace Logger
{
    void LOG(const std::string& log);

    template <typename... Pack> void LogInfo(Pack&&... args)
    {
        auto separator = "";
        std::ostringstream os;
        (((os << separator << args), separator = "#"), ...);
        std::cout << os.str() << std::endl;
    }

} // namespace Logger

#endif // LOGGER_HPP