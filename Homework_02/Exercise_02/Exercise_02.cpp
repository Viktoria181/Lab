#include <iostream>

int FunctionByOnes(int a, int b, int c)
{
    return (!a && !b && !c) || (!a && b && !c) || (!a && b && c) || (a && b && c);
}

int FunctionByZeros(int a, int b, int c)
{
    return !((!a && !b && c) && (a && !b && !c) && (a && !b && c) && (a && b && !c));
}

int FunctionMinimized(int a, int b, int c)
{
    return (!a && !c) || (b && c);
}

int main()
{
    int a, b, c;
    std::cout << "Enter values for a, b, c (0 or 1): ";
    std::cin >> a >> b >> c;

    if ((a != 0 && a != 1) || (b != 0 && b != 1) || (c != 0 && c != 1))
    {
        std::cerr << "Error! One of the inputs is not 0 or 1." << std::endl;
    }
    else
    {
        std::cout << "F(a, b, c) by ones: " << FunctionByOnes(a, b, c) << std::endl;
        std::cout << "F(a, b, c) by zeros: " << FunctionByZeros(a, b, c) << std::endl;
        std::cout << "F(a, b, c) minimized: " << FunctionMinimized(a, b, c) << std::endl;
    }
    return 0;
}
