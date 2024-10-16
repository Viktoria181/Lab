/*
Задача 21: Проверка за положително или отрицателно число
Описание: Напишете програма, която чете едно цяло число и отпечатва дали то е положително, отрицателно или нула.
*/

#include <iostream>

int main()
{
    int number;

    std::cout << "Enter the number: ";
    std::cin >> number;

    if(number > 0)
        std::cout << "The number " << number << " is positive";
    else if(number < 0)
        std::cout << "The number " << number << " is negative";
    else
        std::cout << "The number is zero";

    return 0;
}
