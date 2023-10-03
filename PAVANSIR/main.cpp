#include "rectangle.h"
#include<iostream>
using namespace std;
int main(){
    Rectangle r1, r2(12,23);
    cout << "Area of Rectangle 1:" << r1.getArea() << endl;
    cout << "Perimeter of Rectangle 1:" << r1.getPerimeter() << endl;
    cout << "Area of Rectangle 2:" << r2.getArea() << endl;
    cout << "Perimeter of Rectangle 2:" << r2.getPerimeter() << endl;
    return 0;
}