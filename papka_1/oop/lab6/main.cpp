#include <iostream>
#include "box.h"

using namespace std;

int main(){
    
    try {
        double a, b, c;
        cout << "enter three sides" << endl;
        cin >> a >> b >> c;
        Box paral(a, b, c);
        cout << "volume of the box: " << paral.vol();
    }
    catch(const int num ){
        cout << "numbers are less than or equal to 0\nenter correct numbers" << endl;
        
    }
    return 0;
    


}