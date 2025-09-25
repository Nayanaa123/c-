#include <iostream>
using namespace std;

class Transport {
public:
    virtual void travelTime() { // virtual for overriding
        cout << "General travel time." << endl;
    }
};

class Bus : public Transport {
public:
    void travelTime() override {
        cout << "Bus time = Route time + Traffic delay." << endl;
    }
};

class Train : public Transport {
public:
    void travelTime() override {
        cout << "Train time = Fixed time between stations." << endl;
    }
};

class Flight : public Transport {
public:
    void travelTime() override {
        cout << "Flight time = Check-in delay + Flying time." << endl;
    }
};

int main() {
    Transport* t;

    Bus b;
    Train tr;
    Flight f;

    t = &b; t->travelTime();
    t = &tr; t->travelTime();
    t = &f; t->travelTime();

    return 0;
}