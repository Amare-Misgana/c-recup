#include <iostream>

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{

    int x = 3;

    std::cout << x << std::endl;         // print the local variable with the value '3'.
    std::cout << first::x << std::endl;  // print the variable inside the 'first' namespace.
    std::cout << second::x << std::endl; // print the variable inside the 'second' namespace.
    return 0;
}