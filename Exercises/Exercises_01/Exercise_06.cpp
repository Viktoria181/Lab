/*
Задача 6: Изчисляване на факториел
Описание: Напишете програма, която чете цяло число и изчислява неговия факториел. Уверете се, че програмата обработва правилно случая, когато числото е 0.
*/

#include <iostream>

int main()
{
	unsigned int n;
	std::cout << "Enter n factorial: ";
	std::cin >> n;

	int finalNum = 1;
	if (n == 0)
	{
		std::cout << n << " factorial is " << finalNum;
		return 1;
	}
	for (int i = 1; i <= n; i++)
		finalNum *= i;

	std::cout << n << " factorial is " << finalNum;

	return 0;
}
