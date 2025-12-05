#include <iostream>
#include <cmath>

double pythagoras(double a, double b)
{
    double c = sqrt(pow(a, 2) + pow(b, 2));
    return c;
}

int main()
{
    double a;
    double b;

    std::cout << "Enter the value of a: ";
    std::cin >> a;
    std::cout << std::endl
              << "Enter the value of b: ";
    std::cin >> b;
    std::cout << std::endl
              << "Answer: " << pythagoras(a, b);

    return 0;
}