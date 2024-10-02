/*
Задача 24: Квадратен корен на число
Описание: Напишете програма, която чете реално число и отпечатва неговия квадратен корен. Използвайте подходяща математическа функция.
*/

#include <iostream>
#include <cmath> // За функцията sqrt

int main()
{
    double number, squareRoot;

    std::cout << "Enter a number: ";
    std::cin >> number;

    // Изчисляване на квадратния корен
    squareRoot = sqrt(number);

    std::cout << "The square root of " << number << " is " << squareRoot << std::endl;

    return 0;
}
