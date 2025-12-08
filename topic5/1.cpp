#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    const int SIZE = 15;
    int array[SIZE];

    // заповнюємо масив випадковими числами
    for (int i = 0; i < SIZE; i++) {
        array[i] = rand() % 10; // остача від ділення. Завжди від 0 до 9
    }
    
	// виведемо масив
    cout << "Масив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    int evenCount = 0;
    for (int i = 0; i < SIZE; i++) {
        if (array[i] % 2 == 0)
            evenCount++;
    }

    cout << "Кількість парних елементів: " << evenCount << endl;

    return 0;
}
