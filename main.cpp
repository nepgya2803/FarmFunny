#include <iomanip>
#include <iostream>

#define LOG(ITEMS) std::cout << ITEMS << std::endl

int main()
{
  std::cout << "Welcome to the farm" << std::endl;
  while (true)
  {
    LOG("Enter your choice: ");
    LOG("");
  }
}