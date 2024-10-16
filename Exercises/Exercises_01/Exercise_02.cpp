/*
Задача 2: Изчисляване на средна стойност
Описание: Напишете програма, която чете три реални числа (тип float или double) и изчислява тяхната средна стойност.
*/

#include <iostream>

int main()
{
	int number1, number2, number3;

	std::cout << "Enter three numbers: ";
	std::cin >> number1 >> number2 >> number3;

	int sum = number1 + number2 + number3;
	int average = sum / 3;

	std::cout << "The average sum is: " << average;

	retuen 0;
}
