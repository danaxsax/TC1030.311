#ifndef CIRCLE_H
#define CIRCLE_H

#include "./shape.h"  // Assuming Shape is a base class and Shape.h is available

class Polygon : public Shape {
public:
    Polygon();
    Polygon(int x, int y, int radius);

private:
    int radius;
};

#endif // CIRCLE_H
