
/*
Задача 12: Разлика между две числа
Описание: Напишете програма, която чете две цели числа и отпечатва разликата между тях.
*/

#include <iostream>

int main()
{
	int number1 = 0, number2 = 0, diff = 0;
	std::cout << "Enter the first number: ";
	std::cin >> number1;
	std::cout << "Enter the second number: ";
	std::cin >> number2;

	if (number1 > number2)
		diff = number1 - number2;
	else
		diff = number2 - number1;
	
	// diff = abs(number1 - number2);

	std::cout << "The difference between the two numbers is: " << diff;

	return 0;
}
