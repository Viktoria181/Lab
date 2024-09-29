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

    // Изчисляване на heightInMeters^2
    double heightSquared = heightInMeters * heightInMeters;

    // Изчисляване на heightInMeters^(0.5)
    double heightRoot = sqrt(heightInMeters); // or use heightInMeters * heightInMeters

    // Изчисляване на индекса на телесната маса с новата формула
    bodyMassIndex = 1.3 * weightInKg / (heightSquared * heightRoot);

    // Извеждане на резултата
    std::cout << "Вашият индекс на телесната маса (BMI) е: " << bodyMassIndex << std::endl;

    return 0;
}
