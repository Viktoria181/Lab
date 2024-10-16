#include <iostream>

int main()
{
    double number1, number2, difference;

    // Четене на две реални числа
    std::cout << "Enter the first number: ";
    std::cin >> number1;
    std::cout << "Enter the second number: ";
    std::cin >> number2;

    // Изчисляване на разликата
    difference = number1 - number2;

    // Отпечатване на разликата
    std::cout << "The difference between " << number1 << " and " << number2 << " is " << difference << std::endl;

    return 0;
}
