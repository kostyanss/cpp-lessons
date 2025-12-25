#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class Solid {
protected:
    string name;

public:
    Solid(const string& n) : name(n) {}

    virtual void show() const {
        cout << "Фігура обертання: " << name << "\n";
    }

    virtual double volume() const = 0;

    virtual ~Solid() = default;
};

class Cone : public Solid {
    double radius;
    double height;

public:
    Cone(double r, double h)
        : Solid("Конус"), radius(r), height(h) {
    }

    double volume() const override {
        return 3.141592653589793 * radius * radius * height / 3.0;
    }

    void show() const override {
        cout << "Фігура обертання: " << name
            << ", радіус = " << radius
            << ", висота = " << height
            << ", об'єм = " << volume()
            << "\n";
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int N = 3;
    Solid* objects[N] = { nullptr };

    objects[0] = new Cone(3.0, 5.0);
    objects[1] = new Cone(2.5, 4.0);
    objects[2] = new Cone(1.5, 6.0);

    for (int i = 0; i < N; i++) {
        objects[i]->show();
    }

    for (int i = 0; i < N; i++) {
        delete objects[i];
        objects[i] = nullptr;
    }

    return 0;
}
