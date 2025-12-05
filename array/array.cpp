#include <iostream>

int main() {

    std::string names[] = {"Amare", "Dagim", "Fitsum", "Hiwot", "Muse", "Fiker"};
    int names_len = sizeof(names) / sizeof(names[0]);

    std::string subjects[] = {"Math", "Biology", "Chemistry", "Physics", "English"};
    int index = 1;

    for (std::string subject : subjects) { // using foreach loop.
	std::cout << index << " " << subject << std::endl;
	index++;
    }

    for (int i = 0; i < names_len; i++) {
	std::cout << i << ": " << names[i] << std::endl;
    }
    return 0;
}