#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED

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
        int getX();
        void setX(int x);
        int getY();
        void setY(int y);
        void display();
};

#endif
