/*
Задача 13: Максимално от три числа
Описание: Напишете програма, която чете три цели числа и отпечатва най-голямото от тях.
*/

#include <iostream>

int main()
{

	int number1 = 0, number2 = 0, number3 = 0, biggestNum = 0;
	std::cout << "Enter the first number: ";
	std::cin >> number1;
	std::cout << "Enter the second number: ";
	std::cin >> number2;
	std::cout << "Enter the third number: ";
	std::cin >> number3;

	if (number1 > number2)
	{
		number1 > number3 ? biggestNum = number1 : biggestNum = number3;
		std::cout << "The biggest number is: " << biggestNum;
	}
	else if (number2 > number3)
	{
		biggestNum = number2;
		std::cout << "The biggest number is: " << biggestNum;
	}
	else
	{
		biggestNum = number3;
		std::cout << "The biggest number is: " << biggestNum;
	}

	return 0;
}
