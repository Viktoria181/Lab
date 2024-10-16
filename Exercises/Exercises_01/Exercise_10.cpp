/*
Задача 10: Температурен конвертор
Описание: Напишете програма, която чете температура в Целзий и я конвертира в Фаренхайт. Формулата за конверсия е: F = C * 9/5 + 32.
*/

#include <iostream>

int main()
{
	double tempInCelsius, tempInFahrenheit; //it's important to use double for the variables in this exercise because the division 
	                                        //involved in the temperature conversion can result in a non-integer (decimal) value.

	std::cout << "Enter the temperature  in Fahrenheit ";
	std::cin >> tempInFahrenheit;

	tempInCelsius = (tempInFahrenheit - 32) * 5/9;

	std::cout << "The temperature  in Celsius is " << tempInCelsius;

	return 0;
}
