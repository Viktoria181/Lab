#include <iostream>

int main() {
    // Деклариране на променливите
    double radius = 0, height = 0, filledHeight = 0, volume = 0;

    // Въвеждане на радиуса и височината на цилиндъра
    std::cout << "Въведете радиуса на цилиндъра (в метри): ";
    std::cin >> radius;

    std::cout << "Въведете височината на цилиндъра (в метри): ";
    std::cin >> height;

    // Въвеждане на височината до която е пълен цилиндърът
    std::cout << "Въведете височината, до която е пълен цилиндърът (в метри): ";
    std::cin >> filledHeight;

    // Проверка дали височината е в допустимите граници
    if (filledHeight > height) {
        std::cerr << "Височината не може да надвишава височината на цилиндъра." << std::endl;
        return 1; // Завръщане с код за грешка
    }

    double radiusSquared = radius * radius;
    // Изчисляване на обема
    volume = 3.14 * radiusSquared * filledHeight;

    // Извеждане на резултата
    std::cout << "Обемът на частта от цилиндъра, пълна до височина " << filledHeight
        << " метра, е: " << volume << " кубически метра." << std::endl;

    return 0;
}
