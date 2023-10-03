#include "rectangle.h"
#include<iostream>

Rectangle :: Rectangle(): width(0), height(0){

}
Rectangle :: Rectangle(double width, double height): height(height),width(width){

}
double Rectangle :: getArea() const{
    return (width * height);
}
double Rectangle :: getPerimeter() const{
    return {2 * (width + height)};
}