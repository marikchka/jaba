#ifndef SON
#define SON
#include<iostream>
#include "dauther2.h"
#include "boyfriend.h"
using namespace std;

class Son:public Dauther2, private Boyfriend {
private:
    string helpsTo;
public:
    Son(const string& name): Dauther2(name), Boyfriend("") {}
    
    void input(){
        Dauther2::input();
        cout << "enter who he helps to: ";
        cin >> helpsTo; 
    }

    void output() const {
        Dauther2::output();
        cout << "helps to: " << helpsTo << endl;
    }
};
#endif