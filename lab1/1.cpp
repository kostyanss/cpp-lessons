#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double x;

    cout << "Введіть значення x: ";
    cin >> x;

    // Перевірка області визначення lg(x)
    if (x <= 0) {
        cout << "Помилка: x має бути більшим за 0, оскільки логарифм від'ємного числа не існує." << endl;
        return 0;
    }

    double numerator = exp(-x) - 12.34;
    double denominator = log10(x) - cos(pow(x, 3));

    // Перевірка знаменника
    if (denominator == 0.0) {
        cout << "Помилка: знаменник дорівнює нулю." << endl;
        return 0;
    }

    double fraction = numerator / denominator;

    // Для степеня -0.5 потрібно, щоб вираз під коренем був додатним
    if (fraction <= 0) {
        cout << "Помилка: вираз під коренем має бути додатним." << endl;
        return 0;
    }

    double z = pow(fraction, -0.5);

    cout << "Результат z = " << z << endl;

    return 0;
}
