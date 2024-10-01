/*
Задача 16: Средно аритметично на N числа
Описание: Напишете програма, която първо чете цяло число N, след което чете N реални числа и изчислява тяхната средна стойност.
*/


#include <iostream>

int main()
{
	int number, average = 0, N;

	std::cout << "Enter N: ";
	std::cin >> N;

	std::cout << "Enter " << N << " numbers: ";

	int counter = N;

	while (counter != 0)
	{ 
		std::cin >> number;
		average += number;
		counter--;
	}

	average /= N;

	std::cout << "The average amount of the entered numbers is: " << average;
}


// case
