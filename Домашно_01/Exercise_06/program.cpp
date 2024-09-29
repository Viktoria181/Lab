#include <iostream>
#include “swap.h”

int main() {
    int num1, num2;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Before swap: Number1 = " << num1 << ", Number2 = " << num2 << std::endl;

    swap(num1, num2);

    std::cout << "After swap: Number1 = " << num1 << ", Number2 = " << num2 << std::endl;

    return 0;
}
