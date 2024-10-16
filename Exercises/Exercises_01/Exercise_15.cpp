/*
Задача 15: Сумиране на цифрите на число
Описание: Напишете програма, която чете цяло число и изчислява сумата на неговите цифри.
*/

#include <iostream>

int main()
{

	int number = 0, sum = 0;
	std::cout << "Enter the number: ";
	std::cin >> number;

	if (number == 0)
		std::cout << "The sum is zero!";

	while (number != 0)
	{
		sum += number % 10;
		number /= 10;
	}
	std::cout << "The sum of the digits is: " << sum;

	return 0;
}

