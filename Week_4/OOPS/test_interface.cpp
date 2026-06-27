#include <iostream>
using namespace std;

class Test {
public:
    virtual void square(int num) = 0;
    virtual ~Test() {}
};

class Arithmetic : public Test {
public:
    void square(int num) override {
        cout << "Square: " << (num * num) << endl;
    }
};

class ToTestInt {
public:
    void testMethod(int val) {
        Arithmetic auth;
        auth.square(val);
    }
};