#include <iostream>
#include <windows.h>
using namespace std;

template <typename T>
void printArray(const T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

// Шаблонна функція пошуку і виводу елементів у діапазоні [low; high]
template <typename T>
void findAndPrintInRange(const T arr[], int size, T low, T high) {
    cout << "Масив: ";
    printArray(arr, size);

    cout << "Діапазон [" << low << ";" << high << "]: ";

    bool found = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= low && arr[i] <= high) {
            cout << arr[i] << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "немає елементів";
    }
    cout << "\n\n";
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a1[] = { 1, 5, 7, 10, 12, 3, 9 };
    int n1 = sizeof(a1) / sizeof(a1[0]);

    double a2[] = { 1.2, 5.5, 7.0, 10.1, 12.3, 3.9, 9.8 };
    int n2 = sizeof(a2) / sizeof(a2[0]);

    char a3[] = { 'a', 'd', 'z', 'b', 'm', 'c' };
    int n3 = sizeof(a3) / sizeof(a3[0]);

    cout << "int\n";
    findAndPrintInRange(a1, n1, 5, 10);

    cout << "double\n";
    findAndPrintInRange(a2, n2, 3.5, 10.0);

    cout << "char\n";
    findAndPrintInRange(a3, n3, 'b', 'm');

    return 0;
}
