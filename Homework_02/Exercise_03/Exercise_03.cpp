#include <iostream>

int main()
{
	int number1, number2, result;
	std::cout << "Number1 is: ";
	std::cin >> number1;
	std::cout << "Number2 is: ";
        std::cin >> number2;

	if ((number1 == 0 || number1 == 1) && (number2 == 0 || number2 == 1))
	{
		result = number1 ^ number2;
		std::cout << "The result from XOR operation is: " << result;
	}
	else
	{
		std::cerr << "Error! The numbers are wrong! ";
	}

	return 0;
}
