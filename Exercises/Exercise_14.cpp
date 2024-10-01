/*
Задача 14: Преобразуване на метри в километри
Описание: Напишете програма, която чете разстояние в метри и го конвертира в километри.
*/

#include <iostream>

int main()
{

	double metres, kilometres;
	std::cout << "Enter the metres: ";
	std::cin >> metres;

	if (metres == 0)
		std::cerr << "Error, varibles are invalid!";

	kilometres = metres / 1000;

	std::cout << "The kilometres are: " << kilometres << "km.";

	return 0;
}
