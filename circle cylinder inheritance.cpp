#include <iostream>
#include <cmath>
using namespace std;

class Circle {
protected:
    double radius;
    double color;

public:
    // Constructor with radius
    Circle(double r) {
        radius = r;
        color = 0;   // default color
    }

    // Constructor with radius and color
    Circle(double r, double c) {
        radius = r;
        color = c;
    }

    double getRadius() {
        return radius;
    }

    // Virtual function for polymorphism
    virtual double getArea() {
        return M_PI * radius * radius;
    }

    double getColor() {
        return color;
    }
};

class Cylinder : public Circle {
    double height;

public:
    // Constructor with height and radius
    Cylinder(double h, double r) : Circle(r) {
        height = h;
    }

    // Constructor with height, radius and color
    Cylinder(double h, double r, double c) : Circle(r, c) {
        height = h;
    }

    double getHeight() {
        return height;
    }

    // Overriding getArea()
    double getArea() override {
        return 2 * M_PI * radius * (radius + height);
    }

    double getVolume() {
        return M_PI * radius * radius * height;
    }
};

int main() {
    Cylinder c1(10, 3, 1);
    Cylinder c2(10, 3, 1);

    // Polymorphism using base class pointer
    Circle *p1 = &c1;
    Circle *p2 = &c2;

    if (p1->getArea() == p2->getArea() &&
        c1.getVolume() == c2.getVolume() &&
        c1.getColor() == c2.getColor()) {
        cout << "The two cylinders are similar." << endl;
    } else {
        cout << "The two cylinders are not similar." << endl;
    }

    return 0;
}
