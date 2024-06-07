#ifndef SHAPE_H_INCLUDE
#define SHAPE_H_INCLUDE

#include <iostream>

using namespace std;
class Shape {
    private:
        int x;
        int y;
    public:
        Shape();
        Shape(int x, int y);
        string draw();

        int getValueX();
        int getValueY();
};

#endif
