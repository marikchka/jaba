#ifndef BOY
#define BOY
#include<iostream>
using namespace std;

class Boyfriend{
private:
    string name;

public:
    Boyfriend(const string& name): name(name) {}
    string workOnWho;
    
    void input(){
        cout << "enter the name of the boss: ";
        cin >> workOnWho;
    }

    void output() const {
        cout << "works on: " << workOnWho << endl;
    }
};
#endif