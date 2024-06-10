#include <iostream>
#include "Shape.h"
#include "Circle.h"

using namespace std;

int main() {
    Shape figura (1, 2);
    cout <<figura.draw() << "con valor x en: " << figura.getX() << " y valor y en: " << figura.getY() << endl;

    Circle circle(2, 3, 5);
    count << circle.draw() << "con valor x en: " << circle.getX() << " y valor y en: " << circle.getY() << " y radio en: " << circle.getRadius() << endl;
    shape.display();
    circle.display();

    return 0;
}