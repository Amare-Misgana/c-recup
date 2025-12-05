#include <iostream>

int main()
{

    int num1;
    int num2;
    char oper;
    while (true)
    {
        std::cout << "Enter first number: ";
        std::cin >> num1;
        std::cout << std::endl
                  << "Enter second number: ";
        std::cin >> num2;
        std::cout << std::endl
                  << "Enter operation(*, /, +, -) ";
        std::cin >> oper;
        std::cout << std::endl;
        if (oper == '*')
        {
            std::cout << num1 * num2 << std::endl;
        }
        else if (oper == '/')
        {
            std::cout << num1 / num2 << std::endl;
        }
        else if (oper == '+')
        {
            std::cout << num1 + num2 << std::endl;
        }
        else if (oper == '-')
        {
            std::cout << num1 - num2 << std::endl;
        }
        else
        {
            std::cout << "'" << oper << "' is an invalid input. Try again!" << std::endl;
        }
    }

    return 0;
}