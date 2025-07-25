#include <iostream>
using namespace std;

class Shape {
protected:
    float width, height;

public:
    Shape(float w = 0, float h = 0) : width(w), height(h) {}

    // Pure virtual function to calculate area
    virtual float area() const = 0;

    // Virtual destructor
    virtual ~Shape() {}
};

class Triangle : public Shape {
public:
    Triangle(float base, float height) : Shape(base, height) {}

    // Overriding area function
    float area() const {
        return 0.5 * width * height;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(float width, float height) : Shape(width, height) {}

    // Overriding area function
    float area() const {
        return width * height;
    }
};

int main() {
    system("cls");
    Triangle t(10, 5);
    Rectangle r(8, 4);
    cout << "Area of Triangle: " << t.area() << endl;
    cout << "Area of Rectangle: " << r.area() << endl;

    return 0;
}
