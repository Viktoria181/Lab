/*
Задача 7: Програма за размяна на стойности
Описание: Напишете програма, която разменя стойностите на две променливи без да използва трета помощна променлива. Използвайте аритметични оператори за тази цел.
*/

#include <iostream>

int main()
{
	int number1 = 0;
	int number2 = 0;

	std::cout << "Enter the first number: ";
	std::cin >> number1;
	std::cout << "Enter the second number: ";
	std::cin >> number2;

	number1 = number1 + number2;
	number2 = number1 - number2;
	number1 = number1 - number2;

	std::cout << "After swapping, the first number is " << number1 <<
		", and the second number is " << number2;

	return 0;
}
