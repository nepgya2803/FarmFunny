#include <iostream>

#define LOG(ITEMS) std::cout << ITEMS << std::endl

int main()
{
    std::cout << "Welcome to the farm" << std::endl;
    while (true)
    {
        LOG("Enter your choice: ");
        LOG("1. Report all");
        LOG("2. Report resource");
        LOG("3. Report animals");
        LOG("4. Feed animals");
        LOG("5. Let animals out");
        LOG("6. Buy animals");
        LOG("7. Sell animals");
        LOG("8. Quit the game");
    }
}