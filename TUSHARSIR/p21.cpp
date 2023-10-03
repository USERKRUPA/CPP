#include<iostream>
#define PI 3.14
using namespace std;
void areaCircum(int r, float *area, float *peri);
void areaPeri(int l, int b, float *area, float *peri);

int main(){
    int choice;
    float r, a, p, l, b;
    do{
        cout<<"1 Circle\n2 Rectangle\n3 Exit"<<endl;
        cout<<"Enter your choice: "<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                    cout<<"Enter radius: ";
                    cin>>r;
                    areaCircum(r, &a, &p);
                    cout<<"Area of circle = "<<a<<"\nCircumference of Circle = "<<p<<endl;
                    break;
            case 2:
                    cout<<"Enter length: ";
                    cin>>l;
                    cout<<"Enter breadth: ";
                    cin>>b;
                    areaPeri(l, b, &a, &p);
                    cout<<"Area of Rectangle = "<<a<<"\nPerimeter of Rectangle = "<<p<<endl;
                    break;
            case 3:
                    exit(0);
            default:
                    cout<<"Invalid choice..."<<endl;
        }
        cout<<"Enter -1 to exit: "<<endl;
        cin>>choice;
    }while(choice != -1);
    return 0;
}

void areaCircum(int r, float *area, float *peri){
    *area = PI * r * r;
    *peri = 2 * PI * r;
}

void areaPeri(int l, int b, float *area, float *peri){
    *area = l * b;
    *peri = 2 * (l + b);
}