#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main() {
	SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    // Задані константи
    double a = 3.5;
    double b = -2.16;

    // Перевірка області визначення arcsin(b)
    if (b < -1.0 || b > 1.0) {
        cout << "Помилка: arcsin(b) визначений лише для -1 <= b <= 1." << endl;
        return 0;
    }

    // Перевірка для ln|a + b|
    double sum_ab = a + b;
    if (fabs(sum_ab) <= 0.0) {
        cout << "Помилка: ln|a + b| не визначений при |a + b| <= 0." << endl;
        return 0;
    }
    double ln_abs_ab = log(fabs(sum_ab));
    double denom_x = ln_abs_ab - 1.0;
    if (denom_x == 0.0) {
        cout << "Помилка: знаменник у формулі для x дорівнює нулю." << endl;
        return 0;
    }

    // Обчислення x
    double num_x = pow(sin(pow(a, 3.0)), 2.0) - asin(b);
    double x = num_x / denom_x;

    // Перевірка для ab у формулі z
    double prod_ab = a * b;
    if (prod_ab == 0.0) {
        cout << "Помилка: добуток a * b не може дорівнювати нулю у формулі для z." << endl;
        return 0;
    }

    // Обчислення z
    double inner_z = fabs((a + b) / prod_ab);   // підкореневий вираз
    // inner_z завжди >= 0 завдяки fabs
    double PI = 3.141592653589793;
    double z = sqrt(inner_z) + PI;

    // Перевірка для lg|x - 7|
    double diff_x = x - 7.0;
    double abs_diff_x = fabs(diff_x);
    if (abs_diff_x <= 0.0) {
        cout << "Помилка: |x - 7| має бути > 0 у формулі для y." << endl;
        return 0;
    }
    double denom_y = log10(abs_diff_x);
    if (denom_y == 0.0) {
        cout << "Помилка: знаменник у формулі для y дорівнює нулю." << endl;
        return 0;
    }

    // Обчислення y
    double y = (x * x - z * z) / denom_y;

    // Вивід результатів
    cout << "x = " << x << endl;
    cout << "z = " << z << endl;
    cout << "y = " << y << endl;

    return 0;
}
