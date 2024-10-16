/*
Задача 19: Произведение на три числа
Описание: Напишете програма, която чете три цели числа и изчислява тяхното произведение.
*/

#include <iostream>

int main()
{
	int number1, number2, number3, product;

	std::cout << "Enter the three numbers: ";
	std::cin >> number1 >> number2 >> number3;

	product = number1 * number2 * number3;

	std::cout << "The products of two numbers is: " << product;
	return 0;
}
