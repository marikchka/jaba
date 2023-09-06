#ifndef MAMA
#define MAMA
#include <iostream>
using namespace std;

class Mam1 {
private:
    string name;
public:
    string status;
    int age;
    Mam1(const string& name): name(name) {}

    string getName() const {
        return name;
    }

    void input() {
        cout << "enter status: ";
        cin >> status;
        cout << "enter age: ";
        cin >> age;
    }

    void output() const {
        cout << "status: " << status << endl;
        cout << "age: " << age << endl;
        cout << "name: " << name << endl;
    }
};
#endif 