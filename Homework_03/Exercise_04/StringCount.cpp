#include <iostream>
#include <cstring>  // strcmp

int main(int argc, char* argv[]) {
    // Проверяваме дали има точно един аргумент на командния ред
    if (argc != 2) {
        std::cerr << "Error!\n";
        return 1;
    }

    // Аргументът от командния ред - търсеният стринг
    char* targetStr = argv[1];
    char inputStr[1024];  // Използваме фиксиран масив за входните данни
    int count = 0;

    // Четем редове от стандартния вход до EOF 
    while (std::cin.getline(inputStr, 256)) {
        // Сравняваме входния стринг с търсения стринг
        if (strcmp(inputStr, targetStr) == 0) {
            count++;
        }
    }

    // Извеждаме броя на срещанията
    std::cout << "Count = " << count << std::endl;

    return 0;
}
