/*
Задача 11: Изчисляване на обем на куб
Описание: Напишете програма, която чете дължина на ръба на куб и изчислява неговия обем.
*/

#include <iostream>

int main()
{
	unsigned int sideA, volume;
	std::cout << "Enter the side length of the cube: ";
	std::cin >> sideA;

	volume = sideA * sideA * sideA;

	std::cout << "The volume of the cube is: " << volume;

	return 0;
}
