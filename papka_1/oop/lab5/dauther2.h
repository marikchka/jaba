#ifndef DAT
#define DAT
#include<iostream>
#include "mam1.h"
using namespace std;

class Dauther2 : private Dauther1 {
private:
    int amountOfZaza;
public:
    Dauther2(const string& name): Dauther1(name) {}

    int getAmountOfZaza() const{
        return amountOfZaza;
    }

    void torh(){
        if (amountOfZaza >= 1)
            cout << "you're lucky" << endl;
        else
            cout <<  "no." << endl;
    }

    
    void input(){
        Mam1::input();
        
    }
    void zazaInfo(){
        cout << "how much zaza do you have? ";
        cin >> amountOfZaza;
    }

    void output() const {
        Mam1::output();

    }

    void speak() const override {
        cout << "I am an artist" << endl;
    }
};
#endif