#include <iostream>
#include <stack>

void decToHex(int number)
{
    std::stack<char> result;
    while (number != 0)
    {
        int remainder = number % 16;
        if (remainder < 10) {
            result.push(remainder + '0');
        } else {
            result.push(remainder - 10 + 'A');
        }
        number /= 16;  
    }

    if (result.empty()) {
        std::cout << "0" << std::endl;
    }

    while (!result.empty())
    {
        std::cout << result.top(); 
        result.pop();  
    }
    std::cout << std::endl;
}

int main()
{
    int number;
    std::cout << "Enter the decimal number: ";
    std::cin >> number;

    decToHex(number); 

    return 0;
}
