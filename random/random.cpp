#include <iostream>
#include <random>

int random_number(int first_num, int last_num)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(first_num, last_num);
    return dist(gen);
}

int main()
{

    std::cout << random_number(1, 100);
    return 0;
}