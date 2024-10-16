#include <iostream>
#include <iomanip>  // За std::setprecision

double stringToDouble(const char* str) {
    
    double result = 0.0;
    int sign = 1;
    bool decimalFound = false;
    double decimalMultiplier = 0.1;
    int i = 0;

    // Проверяваме за отрицателен знак
    if (str[i] == '-') {
        sign = -1;
        i++;
    }

    // Обработваме числата
    for (; str[i] != '\0'; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            if (decimalFound) {
                // След десетичната запетая, умножаваме всяка цифра 
                // по съответната десетична стойност
                result += (str[i] - '0') * decimalMultiplier;
                decimalMultiplier /= 10;
            }
            else {
                // Преди десетичната запетая, преместваме цифрите наляво 
                // (умножаваме по 10) и добавяме новата цифра
                result = result * 10 + (str[i] - '0');
            }
        }
        else if (str[i] == '.') {
            if (decimalFound) {
                // Ако е намерена втора десетична запетая, връщаме грешка
                std::cerr << "Error: Multiple decimal points found in number." << std::endl;
                return 0.0;
            }
            decimalFound = true; // Отбелязваме, че сме срещнали десетична запетая
        }
        else {
            // Невалиден символ
            std::cerr << "Error: Invalid character in input." << std::endl;
            return 0.0;
        }
    }

    return result * sign;
}

int main(int argc, char* argv[]) {

    // Проверка за броя на аргументите
    if (argc != 4) {
        std::cerr << "Error: Invalid number of arguments." << std::endl;
        return 1;
    }

    // Прочитане на числата и операцията от командния ред
    double num1 = stringToDouble(argv[1]);
    double num2 = stringToDouble(argv[3]);
    char operation = argv[2][0];
    double result;

    switch (operation) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case 'x':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0) {
            std::cerr << "Error: Division by zero." << std::endl;
            return 1;
        }
        result = num1 / num2;
        break;
    default:
        std::cerr << "Error: Invalid operation." << std::endl;
        return 1;
    }

    // Извеждаме на резултата, закръглен до втория знак след десетичната точка
    std::cout << "Result = " << std::fixed << std::setprecision(2) << result << std::endl;

    return 0;
}
