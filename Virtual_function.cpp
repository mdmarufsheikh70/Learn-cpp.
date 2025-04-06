#include <iostream>

using namespace std;

class Shape {
public:
    virtual double getArea() = 0; // Pure virtual function
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double getArea() override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double getArea() override {
        return length * width;
    }
};

class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}
    double getArea() override {
        return 0.5 * base * height;
    }
};

int main() {
    Shape *shapes[] = {new Circle(5), new Rectangle(4, 3), new Triangle(6, 8)};
    int size = sizeof(shapes) / sizeof(shapes[0]); 
    for (int i = 0; i < size; i++) {
        cout << "Area: " << shapes[i]->getArea() << endl;
    }
    return 0;
}