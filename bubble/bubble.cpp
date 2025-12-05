#include <iostream>

int main() {

    int numbers[] = {10, 98, 12, 92, 9, 3, 6, 4};

    int size = sizeof(numbers) / sizeof(numbers[0]);
    int temp;
    int next_index;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            temp = numbers[j];
            next_index = j + 1;

            if (temp > numbers[next_index]) {
                numbers[j] = numbers[next_index];
                numbers[next_index] = temp;
            }
        }
    }

    for (int number : numbers) {

        std::cout << "Number: " << number << std::endl;
    }

    return 0;
}
