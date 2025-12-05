#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "Enter your name: ";
    // std::cin >> name; Won't be able to get the full name.
    std::getline(std::cin >> std::ws, name); // (>> std::ws) remove whitespace from the buffer.
    std::cout << "Your name is " << name;
    return 0;
}