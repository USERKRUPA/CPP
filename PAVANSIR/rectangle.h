#ifndef RECTANGLE_H
#define RECTANGLE_H

#include<iostream>
using namespace std;
class Rectangle{
    private:
        double width;
        double height;
    public:
        Rectangle();
        Rectangle(double, double);
        double getArea() const;
        double getPerimeter() const;
};

#endif