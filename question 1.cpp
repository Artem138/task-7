#include <iostream>
#include "constants.h"

double calculateHeight(double initialHeight, int seconds)
{
    double distanceFallen { myConstants::gravity * seconds * seconds / 2 };
    double heightNow { initialHeight - distanceFallen };

    // Проверяем, не ушли ли мы под землю
    // Если это так, устанавливаем высоту на уровне земли
    if (heightNow < 0.0)
        return 0.0;
    else
        return heightNow;
}

void calculateAndPrintHeight(double initialHeight, int time)
{
    std::cout << "At " << time << " seconds, the ball is at height: " << calculateHeight(initialHeight, time) << "\n";
}

int main()
{
    std::cout << "Enter the initial height of the tower in meters: ";
    double initialHeight;
    std::cin >> initialHeight;

    int time = 0; // Инициализируем время
    while (calculateHeight(initialHeight, time) > 0.0) { // Цикл до тех пор, пока мяч не достигнет земли
        calculateAndPrintHeight(initialHeight, time);
        time++; // Увеличиваем время на 1 секунду
    }

    std::cout << "At " << time << " seconds, the ball is on the ground.\n";

    return 0;
}
