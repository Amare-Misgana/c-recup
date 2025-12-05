#include <iostream>

int main()
{

    int num1 = 3.234; // implicet type conversion from 3.234 (float) number to (int) => 3

    // Student average = total/number_of_subjects, if done in 'int' form, it will reduce the decimal to intiger
    // For exlicet type conversion, we specifiy the datatype in front of the data.
    // Example: [datatype (std::string, int, double...)] [variable] = ([explicet conversion]) [value];
    /*
        int num1 = 10;
        double result = 298/(double) num1;

    */
    int total = 6;
    int number_of_subjects = 10;

    double value1 = total / number_of_subjects;
    double value2 = total / (double)number_of_subjects; // using explicit type conversion.
    std::cout << "Value1 = " << value1 << std::endl;
    std::cout << "Value2 = " << value2 << std::endl;

    return 0;
}