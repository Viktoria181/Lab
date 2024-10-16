/*
Задача 8: Проверка за делимост
Описание: Напишете програма, която чете две цели числа и проверява дали първото число се дели точно на второто. Ако не се дели, използвайте cerr за извеждане на съобщение за грешка.
*/

#include <iostream>

int main()
{
	int divisible, divisor;
	std::cout << "Enter the divisible: ";
	std::cin >> divisible;
	std::cout << "Enter the divisor: ";
	std::cin >> divisor;

	if (divisor == 0)
		std::cerr << "Error: Division by zero is not allowed." << std::endl;
	else if(divisible % divisor == 0)
		std::cout << "The number " << divisible << " is divisible by " << divisor << "." << std::endl;
	else
		std::cerr << "The number " << divisible << " is not divisible by " << divisor << "." << std::endl;

	return 0;
}
