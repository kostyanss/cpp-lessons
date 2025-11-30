#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    int a;
    double b;
    
	// Введення значень
    cout << "Введіть ціле число: ";
    cin >> a;

    cout << "Введіть дійсне число: ";
    cin >> b;

    // Створюємо вказівники
    int* pInt = &a;
    double* pDouble = &b;

    cout << "\nДо обміну:\n";
    cout << "a = " << a << ", b = " << b << endl;

    // Обмін значень змінних через вказівники
    double temp = *pInt;      // тимчасово зберігаємо значення цілого як double
    *pInt = (int)*pDouble;    // записуємо в a цілу частину з b
    *pDouble = temp;          // повертаємо попереднє значення a в b

    cout << "\nПісля обміну:\n";
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
