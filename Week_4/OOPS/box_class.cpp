#include <iostream>
using namespace std;

class Box {
protected:
    double length;
    double breadth;
public:
    Box(double l, double b) : length(l), breadth(b) {}
    double findArea() {
        return length * breadth;
    }
};

class Box3d : public Box {
private:
    double height;
public:
    Box3d(double l, double b, double h) : Box(l, b), height(h) {}
    double findVolume() {
        return findArea() * height;
    }
};