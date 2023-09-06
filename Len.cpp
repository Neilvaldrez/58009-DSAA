#include <iostream>

int main() {
    int numbers[] = {5, 4, 3, 2, 1};

    int length = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "The length of the array is: " << length << std::endl;

    return 0;
}

