#include <iostream>
#include <cmath>

int main()
{
    int num1 = 4;
    int num2 = 2;
    int abs_num = -10;

    double max = std::max(num1, num2);
    double min = std::min(num1, num2);
    double power = pow(num1, num2);
    double square_root = sqrt(num1);
    double absolute_value = abs(abs_num);

    std::cout << "Numbers are " << num1 << " and " << num2 << std::endl;
    std::cout << "Max: " << max << std::endl;
    std::cout << "Min: " << min << std::endl;
    std::cout << "Power: " << power << std::endl;
    std::cout << "Square Root of " << num1 << ": " << square_root << std::endl;
    std::cout << "Absolute Value of " << abs_num << ": " << absolute_value << std::endl;

    return 0;
}