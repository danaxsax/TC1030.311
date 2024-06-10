#include "Shape.h"

Shape::Shape() {
    x = 0;
    y = 0;
}

Shape::Shape(int x, int y) {
    this->x = x;
    this->y = y;
}

string Shape::draw() {
    return "Drawing a shape at (" + to_string(x) + ", " + to_string(y) + ")";
}

int Shape::getX() {
    return x;
}

void Shape::setX(int x) {
    this->x = x;
}

int Shape::getY() {
    return y;
}

void Shape::setY(int y) {
    this->y = y;
}

void Shape::display() {
    cout << "Shape at (" << x << ", " << y << ")" << endl;
}
