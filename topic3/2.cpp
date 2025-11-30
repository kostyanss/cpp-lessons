#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int n;
    cout << "Введіть розмір масиву: ";
    cin >> n;

    if (n <= 0) {
        cout << "Розмір масиву має бути більше 0!" << endl;
        return 1;
    }

    int* arr = new int[n];

    // Введення елементів масиву
    cout << "Введіть елементи масиву:\n";
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    int target;
    cout << "\nЯке число потрібно знайти? ";
    cin >> target;

    // Пошук числа в масиві
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    // Виведення результату
    if (index != -1) {
        cout << "\nЧисло " << target << " знайдено на позиції " << index << endl;
    }
    else {
        cout << "\nЧисло " << target << " не знайдено в масиві!" << endl;
    }

    delete[] arr;
    return 0;
}
