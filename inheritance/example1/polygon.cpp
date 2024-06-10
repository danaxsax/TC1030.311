#ifndef SHAPE_H
#define SHAPE_H

#include <string>  // Include the string header

using std::string;

class Shape {
public:
    Shape();
    Shape(int x, int y);
    string draw();
    int getX();
    int getY();

protected:
    int x, y;
};

#endif // SHAPE_H
