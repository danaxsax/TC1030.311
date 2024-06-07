#include "/Users/cyrcedanaesalinasrojas/TC1030.311/paquetes/shape.h"

Shape::Shape() {
    x = 0;
    y = 0;
}

Shape::Shape(int valx, int valy) {
    x = valx;
    y = valy;
}

string Shape::draw() {
    return "Drawing a shape at " + to_string(x) + ", " + to_string(y);
}

int Shape::getValueX() {
    return x;
}

int Shape::getValueY() {
    return y;
}