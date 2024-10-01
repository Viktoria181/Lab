/*
Задача 4: Обратен ред на цифрите
Описание : Напишете програма, която чете цяло число и отпечатва неговите цифри в обратен ред.Използвайте подходящи аритметични оператори.
*/

#include <iostream>

int main()
{
	int number = 0;
	std::cout << "Enter the number: ";
	std::cin >> number;

	int finalNum = 0;

	while (number != 0)
	{
		finalNum = finalNum * 10 + number % 10;
		number /= 10;
	}
	std::cout << "The reversed number is: " << finalNum;
}
