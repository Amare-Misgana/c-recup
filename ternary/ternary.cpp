#include <iostream>

int main()
{
    // Ternary: [condition] ? [if true] : [else];

    int age = 18;

    age >= 18 ? std::cout << "You are an adult." : std::cout << "You are still a kid!!!";

    return 0;
}