#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Compartment {
public:
    virtual string notice() = 0;
    virtual ~Compartment() {}
};

class FirstClass : public Compartment {
public:
    string notice() override {
        return "First Class: Luxury seating. Please maintain quietness.";
    }
};

class Ladies : public Compartment {
public:
    string notice() override {
        return "Ladies: Reserved exclusively for female passengers.";
    }
};

class General : public Compartment {
public:
    string notice() override {
        return "General: Open seating coach. Expect heavy rush.";
    }
};

class Luggage : public Compartment {
public:
    string notice() override {
        return "Luggage: Intended for heavy baggage and goods only.";
    }
};

int main() {
    srand(time(0));
    
    Compartment* compartments[10];
    
    for (int i = 0; i < 10; ++i) {
        int randomType = (rand() % 4) + 1;
        
        switch (randomType) {
            case 1:
                compartments[i] = new FirstClass();
                break;
            case 2:
                compartments[i] = new Ladies();
                break;
            case 3:
                compartments[i] = new General();
                break;
            case 4:
                compartments[i] = new Luggage();
                break;
        }
    }
    
    for (int i = 0; i < 10; ++i) {
        cout << "Coach " << (i + 1) << " Notice: " << compartments[i]->notice() << endl;
    }
    
    for (int i = 0; i < 10; ++i) {
        delete compartments[i];
    }
    
    return 0;
}