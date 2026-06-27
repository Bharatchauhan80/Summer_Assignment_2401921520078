#include <iostream>
using namespace std;

class Outer {
public:
    void display() {
        cout << "Outer display function called" << endl;
    }
    class Inner {
    public:
        void display() {
            cout << "Inner display function called" << endl;
        }
    };
};