#ifndef LOGGER_HPP
#define LOGGER_HPP
#include <iostream>
#define LOG(ITEMS)                                                             \
    ((dynamic_cast<std::ostringstream&>(                                       \
        std::ostringstream().seekp(0, ios_base::cur) << ITEMS))                \
       .str())
#endif // LOGGER_HPP