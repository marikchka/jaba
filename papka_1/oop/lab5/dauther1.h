#ifndef DOT
#define DOT
#include <iostream>
#include "mam1.h"
#include "mam2.h"
using namespace std;

class Dauther1 : public Mam1, private Mam2 {
private:
    int moneyStatus;
public:
    Dauther1(const string& name): Mam1(name), Mam2("") {}

    void setMoney(int money){
        moneyStatus = money;
    }

    bool GetMoney(){
        return (moneyStatus > 1);
    }

    void IfWorking(){
        if (GetMoney())
            cout << "making money" << endl;
        else
            cout << "sleeping" << endl;
    }

    void speak() const override {
        cout << "I love money" << endl;
    }
    
};
#endif