#include <iostream>
using namespace std;

class coord {
    int x, y;
public:
    coord() { x = 0; y = 0; }
    coord(int i, int j) { x = i; y = j; }

    coord operator+(const coord& other) {
        coord temp;
        temp.x = x + other.x;
        temp.y = y + other.y;
        return temp;
    }

    void show() {
        cout << "(" << x << ", " << y << ")";
    }
};

int main() {
    coord a(2, 3);
    coord b(4, 7);

    coord c = a + b; // виклик перевантаженого оператора

    cout << "A = ";
    a.show();
    cout << "\nB = ";
    b.show();
    cout << "\nA + B = ";
    c.show();
    cout << endl;

    return 0;
}
