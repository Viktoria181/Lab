/*
Задача 23: Квадрат на число
Описание: Напишете програма, която чете цяло число и отпечатва неговия квадрат.
*/

#include <iostream>

int main()
{
    int number, quadrat;

    std::cout << "The number is: ";
    std::cin >> number;

    quadrat = number * number;

    std::cout << "The quadrat of the " << number << " is: " << quadrat;

    return 0;
}
