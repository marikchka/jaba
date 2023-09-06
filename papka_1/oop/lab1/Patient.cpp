#include <iostream>
#include "Patient.h"
using namespace std;

    void Patient::input(){
        cout<<"enter name: ";
        cin.ignore();
        getline(cin, name);
        cout<<"enter adress: ";
        getline(cin, adress);
        cout<<"enter number: ";
        cin>>number;
        cout<<"enter diagnosis: ";
        cin >> diagnosis;
    }

    void Patient::shiza(string yourDiagnos){
    
        if (yourDiagnos==diagnosis)
            cout<<name<<endl; 
    }

    
    void Patient::numero(int a){
    
        if(a==number) 
            cout<<name<<endl;
    
    }
    void Patient::adresa(string yourAdresa){
        int check;
        check = adress.compare(yourAdresa);
        if (check == 0)
            cout<<name<<endl;
}
