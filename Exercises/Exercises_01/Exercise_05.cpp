/*
Задача 5: Конвертор на валута
Описание: Напишете програма, която конвертира сума от лева в евро. Курсът на конверсия да бъде зададен като променлива във вашата програма.
*/

#include <iostream>

int main()
{
	double exchangeRate, fromBGNToEuro, BGN;
	std::cout << "Enter the euro exchange rate: ";
	std::cin >> exchangeRate;

	std::cout << "Enter the amount in BGN: ";
	std::cin >> fromBGNToEuro;

	fromBGNToEuro *= exchangeRate;
	
	std::cout << "After the exchange we have: " << fromBGNToEuro;


	return 0;
}
