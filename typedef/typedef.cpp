#include <iostream>

typedef std::string str_t; // used to define a data type in simple way.
using using_str_t = std::string;

/*
    Format:
    typedef [The data type] [custom name for that datatype];


    It is possible to use 'using' in place of 'typedef'.
    Format:
    using [custom name for that datatype] [The datatype];

    NOTE: It is a commen practice to add "_t" after the name of the datatype to indicate that it is a typedef.
*/

int main()
{

    str_t name = "Amare Misgana";
    using_str_t bro = "Dagim Misgana";
    std::cout << "The name is: " << name << std::endl;
    std::cout << "Your brother name is: " << bro << std::endl;
    return 0;
}