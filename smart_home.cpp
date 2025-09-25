#include <iostream>
using namespace std;

class Appliance {
public:
    virtual void turnOn() { // virtual function for polymorphism
        cout << "Generic Appliance is on." << endl;
    }
};

class Light : public Appliance {
public:
    void turnOn() override {
        cout << "Light is turned on." << endl;
    }
};

class Fan : public Appliance {
public:
    void turnOn() override {
        cout << "Fan starts spinning." << endl;
    }
};

class AC : public Appliance {
public:
    void turnOn() override {
        cout << "AC starts cooling." << endl;
    }
};

int main() {
    Appliance* a; // base class pointer

    Light l;
    Fan f;
    AC ac;

    a = &l; a->turnOn();
    a = &f; a->turnOn();
    a = &ac; a->turnOn();

    return 0;
}