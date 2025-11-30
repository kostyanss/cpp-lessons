#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

	// Введення рядка символів
    string str;
    cout << "Введіть рядок символів: ";
    getline(cin, str);

    // Інвертування рядка
    string inverted = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        inverted += str[i];
    }

	// Виведення результату
    cout << "\nВихідний рядок: " << str << endl;
    cout << "Інвертований рядок: " << inverted << endl;

    return 0;
}
