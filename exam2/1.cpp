#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class University {
protected:
    string name;
public:
    University(const string& n) : name(n) {}

    virtual void show() const {
        cout << "Університет: " << name << "\n";
    }

    virtual ~University() = default;
};

class Faculty : public University {
protected:
    string facultyName;
public:
    Faculty(const University& uni, const string& fac)
        : University(uni), facultyName(fac) {
    }

    void show() const override {
        cout << "Університет: " << name
            << ", Факультет: " << facultyName << "\n";
    }
};

class Department : public Faculty {
    string departmentName;
public:
    Department(const Faculty& fac, const string& dep)
        : Faculty(fac), departmentName(dep) {
    }

    void show() const override {
        cout << "Університет: " << name
            << ", Факультет: " << facultyName
            << ", Кафедра: " << departmentName << "\n";
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int N = 9;
    University* objects[N] = { nullptr };

    // 1) МНТУ
    University* u1 = new University("МНТУ");
    objects[0] = u1;

    Faculty* f1 = new Faculty(*u1, "Інформаційних технологій");
    objects[1] = f1;

    objects[2] = new Department(*f1, "Програмної інженерії");

    // 2) Університет імені Тараса Шевченка
    University* u2 = new University("Університет імені Тараса Шевченка");
    objects[3] = u2;

    Faculty* f2 = new Faculty(*u2, "Філософський");
    objects[4] = f2;

    objects[5] = new Department(*f2, "Соціології");

    // 3) КПІ
    University* u3 = new University("КПІ");
    objects[6] = u3;

    Faculty* f3 = new Faculty(*u3, "ФІОТ");
    objects[7] = f3;

    objects[8] = new Department(*f3, "Комп'ютерних наук");

	  // display all objects
    for (int i = 0; i < N; i++) {
        objects[i]->show();
    }

	  // cleanup
    for (int i = 0; i < N; i++) {
        delete objects[i];
        objects[i] = nullptr;
    }

    return 0;
}
