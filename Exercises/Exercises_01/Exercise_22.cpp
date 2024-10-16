/*
Задача 22: Конвертор на мили в километри
Описание: Напишете програма, която чете разстояние в мили и го конвертира в километри. (1 миля = 1.60934 километра)
*/

#include <iostream>

int main()
{
    double miles, kilometres;

    std::cout << "Enter miles: ";
    std::cin >> miles;

    kilometres = miles * 1.609344;

    std::cout << "The miles: " << miles << " are " << kilometres << " kilometers." << std::endl;


    return 0;
}
