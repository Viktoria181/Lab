/*
Задача 20: Отклонение от средно
Описание: Напишете програма, която чете три реални числа, изчислява тяхната средна стойност и отпечатва всяко число с отклонението му от средното.
*/

#include <iostream>
#include <cmath> // За функцията abs

int main()
{
    double number1, number2, number3, average;

    std::cout << "Enter the three numbers: ";
    std::cin >> number1 >> number2 >> number3;

    average = (number1 + number2 + number3) / 3;

    std::cout << "The average is: " << average << std::endl;

    std::cout << "Number 1: " << number1 << ", Deviation: " << std::abs(number1 - average) << std::endl;
    std::cout << "Number 2: " << number2 << ", Deviation: " << std::abs(number2 - average) << std::endl;
    std::cout << "Number 3: " << number3 << ", Deviation: " << std::abs(number3 - average) << std::endl;

    return 0;
}
