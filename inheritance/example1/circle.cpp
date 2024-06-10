#include "Circle.h"

Circle::Circle() {
    radius = 0;
}

Circle::Circle(int x, int y, int radius) : Shape(x, y){
    this->radius = radius;
}
