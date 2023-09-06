#include<iostream>
using namespace std;

class fish {
private:
    string age;
public:
    string status;
    
    fish(const string& age): age(age) {}

    string getAge() const {
        return age;
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
        
    }
};

class fish2 {
private:
    string hvist;
public:
    fish2(const string& hvist) : hvist(hvist) {}

    string getHvist() const {
        return hvist;
    }

    void HaveHvist(const string& hvist){
        this->hvist = hvist;
        cout << "have tail " << hvist << endl;
    }

    virtual void talk() const {
        cout << "I am a fish 2" << endl;
    }
};

class chameleon : public fish, private fish2 {
private:
    int typlap;
public:
    chameleon(const string& age): fish(age), fish2("") {}

    void set_lapy(int lapy){
        typlap = lapy;
    }

    bool Getlapy(){
        return (typlap > 1);
    }

    void ifmaelapy(){
        if (Getlapy())
            cout << "have paws" << endl;
        else
            cout << "doesn't have paws" << endl;
    }

    void talk() const override {
        cout << "I like paws" << endl;
    }
    
};

class betterchhameleon : private chameleon {
private:
    int newhvists;
public:
    betterchhameleon(const string& age): chameleon(age) {}

    int getnewhvist() const{
        return newhvists;
    }

    void maehvosty(){
        if (newhvists >= 1)
            cout << "horray!" << endl;
        else
            cout <<  "oh..." << endl;
    }

    
    void input(){
        fish::input();
        
        
    }
    void hvistInfo(){
        cout << "how much tails do you have?";
        cin >> newhvists;
    }

    void output() const {
        fish::output();

    }

    void talk() const override {
        cout << "I am a better fish" << endl;
    }
};

class bird{
private:
    string age;

public:
    bird(const string& age): age(age) {}
    string krila;
    
    void input(){
        cout << "enter the length of the wings: ";
        cin >> krila;
    }

    void output() const {
        cout << "length of wings: " << krila << endl;
    }
};

class flyingchameleon:public betterchhameleon, private bird {
private:
    string liveon;
public:
    flyingchameleon(const string& age): betterchhameleon(age), bird("") {}
    
    void input(){
        betterchhameleon::input();
        cout << "enter where it lives: ";
        cin >> liveon; 
    }

    void output() const {
        betterchhameleon::output();
        cout << "live on: " << liveon << endl;
    }
};

int main(){
    fish a("fish");
    a.input();
    a.output();
    fish2 b("fish2");
    b.talk();
    chameleon d("noi");
    d.input();
    d.output();
    d.ifmaelapy();
    betterchhameleon cham("stiord");
    cham.input();
    cham.hvistInfo();
    cham.maehvosty();
    cham.output();
    bird car("ptashka");
    car.input();
    car.output();
    flyingchameleon flycham("supercham");
    flycham.input();
    flycham.output();
    
    

    

    
    
    
}