/*
Задача 3: Проверка за четност
Описание: Напишете програма, която чете едно цяло число и отпечатва дали то е четно или нечетно.
*/

#include <iostream>

int main()
{
	int number;
	std::cout << "Enter the number: ";
	std::cin >> number;

	if (number % 2 == 0)
		std::cout << "The number " << number << " is even.";
	else
		std::cout << "The number " << number << " is not even.";

	return 0;
}
