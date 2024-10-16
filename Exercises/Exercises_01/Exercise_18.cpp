/*
Задача 18: Преобразуване на часове в секунди
Описание: Напишете програма, която чете брой часове и ги конвертира в секунди.
*/
#include <iostream>


int main()
{
	int hours, seconds;
	std::cout << "Enter the hours: ";
	std::cin >> hours;

	seconds = hours * 60 * 60;

	std::cout << "After the transformation into seconds we have: " << seconds;

	return 0;
}
