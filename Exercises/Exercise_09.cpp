/*
Задача 9: Изчисляване на площ на правоъгълник
Описание: Напишете програма, която чете ширината и височината на правоъгълник и изчислява неговата площ и периметър.
*/

#include <iostream>

int main()
{
	unsigned int sideA, sideB;
	std::cout << "Enter the first side, side A: ";
	std::cin >> sideA;
	std::cout << "Enter the second side, side B: ";
	std::cin >> sideB;

	if (sideA == 0 || sideB == 0)
		std::cerr << "Error: the variables are invalid." << std::endl;

	int area, perimeter;

	area = sideA * sideB;
	perimeter = 2 * (sideA + sideB);

	std::cout << "The area of the rectangle is " << area << " \nand the perimeter is " << perimeter;

	return 0;
}
