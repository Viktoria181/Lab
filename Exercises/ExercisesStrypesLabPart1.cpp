/*
Описание: Напишете програма, която чете две цели числа от стандартния вход (cin) и 
отпечатва тяхната сума на стандартния изход (cout).
*/

#include <iostream>

int main()
{
	int number1 = 0;
	int number2 = 0;

	std::cout << "Enter the first number: ";
	std::cin >> number1;
	std::cout << "Enter the second number: " << number2;
	std::cin >> number2;

	std::cout << "The first number is: " << number1 << ", \nthe second one is " << number2;

}