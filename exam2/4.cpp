#include <iostream>
#include <windows.h>
using namespace std;

// Шаблон класу для зберігання пари чисел різних типів
template <typename T1, typename T2>
class Pair {
    T1 first;
    T2 second;

public:
    Pair(T1 a, T2 b) : first(a), second(b) {}

    void show() const {
        cout << "Перше значення: " << first
            << ", Друге значення: " << second << "\n";
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Pair<int, double> p1(5, 3.14);
    Pair<double, int> p2(2.5, 10);
    Pair<int, int> p3(7, 8);

    p1.show();
    p2.show();
    p3.show();

    return 0;
}
