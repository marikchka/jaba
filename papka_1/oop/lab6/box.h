#include <iostream>

using namespace std;

class Box{
    private:
    double a, b, c;
    public:
    Box(double a, double b, double c): a(a), b(b), c(c){
        if (a <= 0 || b <= 0 || c <= 0)
            throw 1;
        
     
    }
    

    double vol(){
        double v = a*b*c;
        return v;
        
    }
};