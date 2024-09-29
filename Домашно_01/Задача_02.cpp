#include <iostream>

int main() {
    // Деклариране на променливите
    double weightInKg;         // маса в килограми
    double heightInMeters;     // ръст в метри
    double bodyMassIndex;      // индекс на телесната маса (BMI)

    // Въвеждане на масата и ръста
    std::cout << "Въведете тегло в килограми: ";
    std::cin >> weightInKg;

    std::cout << "Въведете ръст в метри: ";
    std::cin >> heightInMeters;

    // Изчисляване на индекса на телесната маса
    bodyMassIndex = weightInKg / (heightInMeters * heightInMeters);

    // Извеждане на резултата
    std::cout << "Индексът на телесната маса (BMI) е: " << bodyMassIndex << std::endl;

    return 0;
}
