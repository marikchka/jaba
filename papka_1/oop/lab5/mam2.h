#ifndef MAM
#define MAM
#include <iostream>
using namespace std;

class Mam2 {
private:
    string job;
public:
    Mam2(const string& job) : job(job) {}

    string getJob() const {
        return job;
    }

    void worksAt(const string& job){
        this->job = job;
        cout << "Works at: " << job << endl;
    }

    virtual void speak() const {
        cout << "I am a Mam2" << endl;
    }
};
#endif 