#include<iostream>
#include "Patient.cpp"
#include "Patient.h"

using namespace std;

int main(){
    cout<<"how many patients do you want? ";
    int am;
    cin>>am;
    Patient* obj=new Patient[am];
    
    for (int i=0;i<am;i++){
      obj[i].input(); 
    }
    string yourDiagnos;
    cout << "enter the diagnosis of patient: ";
    cin.ignore();
    cin >> yourDiagnos;
    for (int i=0;i<=am;i++){
        obj[i].shiza(yourDiagnos);
    }
    
    int a,b;
    cout << "enter an interval: ";
    cin >> a >> b;
    for (int i = 0; i<am;i++){
        for (int j = a; j<=b;j++){
            obj[i].numero(j);
        }
        
        
    }
    cout << "enter an adress of patient: ";
    string yourAdresa;
    cin.ignore();
    getline(cin, yourAdresa);
    for (int i = 0; i <am; i++){
        obj[i].adresa(yourAdresa);
    }
    delete[]obj;
    
}