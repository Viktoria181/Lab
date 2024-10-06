#include <iostream>
#include <stack>


void decToBinary(int number)
{
	std::stack<int> result;
	while (number != 0)
	{
		result.push(number % 2);
		number /= 2;
	}

	while (!result.empty())
	{
		std::cout << result.top() << std::endl;
		result.pop();
	}
	 std::cout << std::endl;
}

int main()
{
	int number;
	std::cout << "Enter the decimal number: ";
	std::cin >> number;
	 
	decToBinary(number);

	return 0;

}
