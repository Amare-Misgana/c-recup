#include <iostream>

double *fibonacci(int nth) {
    double *fib = new double[nth];
    fib[0] = 1;
    fib[1] = 1;

    for (int i = 2; i < nth; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib;
}

int main() {

    int nth;
    std::cout << "Enter the nth of a fibonacci sequance: ";
    std::cin >> nth;
    std::cout << std::endl;
    double *pList = fibonacci(nth);
    for (int i = 0; i < nth; i++) {
        std::cout << i + 1 << ": " << pList[i] << std::endl;
    }
    delete[] pList;
    return 0;
}