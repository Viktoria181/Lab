/*
Задача 25: Средно геометрично на две числа
Описание: Напишете програма, която чете две положителни реални числа и изчислява тяхното средно геометрично.
*/

#include <iostream>
#include <cmath> // За функцията sqrt

int main()
{
    double number1, number2, geometricMean;

    // Четене на две положителни реални числа
    std::cout << "Enter the first number: ";
    std::cin >> number1;
    std::cout << "Enter the second number: ";
    std::cin >> number2;

    // Изчисляване на средното геометрично
    geometricMean = sqrt(number1 * number2);

    std::cout << "The geometric mean of the two numbers is " << geometricMean << std::endl;

    return 0;
}
