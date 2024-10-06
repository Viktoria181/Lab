#include <iostream>
#include <stack>

void decToOctal(int number)
{
    std::stack<int> result;
    while (number != 0)
    {
        result.push(number % 8);  // Вземаме остатъка при деление на 8
        number /= 8;  // Делим числото на 8
    }

    // Ако числото е 0, директно го изведете
    if (result.empty()) {
        std::cout << "0" << std::endl;
    }

    // Извеждаме цифрите в правилен ред
    while (!result.empty())
    {
        std::cout << result.top();  // Извеждаме цифрата на върха на стека
        result.pop();  // Премахваме текущия елемент от стека
    }
    std::cout << std::endl;
}

int main()
{
    int number;
    std::cout << "Enter the decimal number: ";
    std::cin >> number;

    decToOctal(number);  // Преобразуване и извеждане на осмичната форма

    return 0;
}
