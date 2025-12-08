#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    const int ROWS = 8;
    const int COLS = 5;

    int a[ROWS][COLS];

    // заповнення двовимірного масиву числами від 10 до 99
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
        	// rand() % 90 це число 0..89, +10 зміщуємо діапазон 10..99
            a[i][j] = rand() % 90 + 10;  // діапазон [10; 99] 
        }
    }

    // виведення масиву
    cout << "Масив:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
