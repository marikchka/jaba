#include<iostream>
#include "mam1.h"
#include "mam2.h"
#include "dauther1.h"
#include "dauther2.h"
#include "boyfriend.h"
#include "son.h"
using namespace std;



int main(){
    Mam1 a("mother mary");
    a.input();
    a.output();
    Mam2 b("mother mandy");
    b.worksAt("hospital");
    Dauther1 c("noita");
    c.input();
    c.output();
    Dauther2 d("effy");
    d.input();
    d.zazaInfo();
    d.torh();
    d.output();
    Boyfriend e("yura kapelan");
    e.input();
    e.output();
    Son f("oleg");
    f.input();
    f.output();


}