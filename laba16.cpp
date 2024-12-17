#include <iostream>
using namespace std;

int main() {
    double x = 5.0; // Задайте значення x (замініть на потрібне)
    double numerator, denominator, y;

    // Обчислення чисельника: 3000 + x
    numerator = 3000 + x;

    // Обчислення знаменника: x^2 + 2.6 * x - 7.5
    denominator = x * x + 2.6 * x - 7.5;

    // Перевірка ділення на нуль
    if (denominator != 0) {
        y = numerator / denominator;
        cout << "Результат: y = " << y << endl;
    }
    else {
        cout << "Помилка: ділення на нуль." << endl;
    }

    return 0;
}
