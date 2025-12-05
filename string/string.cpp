#include <iostream>

int main()
{
    std::string string;
    std::cout << "Enter a string: ";
    std::getline(std::cin >> std::ws, string);

    std::cout << "String length: " << string.length() << std::endl;
    std::cout << "Is string empty: " << string.empty() << std::endl;
    string.clear(); // makes the string empty.
    std::cout << "Character at index '0': " << string.at(0) << std::endl;
    std::cout << "Adding 'hey' at the end: " << string.append("hey") << std::endl;
    std::cout << "Adding 'B' at the beggining: " << string.insert(0, "B") << std::endl;
    std::cout << "Finding the poition of the letter 'a': " << string.find('a') << std::endl;

    return 0;
}