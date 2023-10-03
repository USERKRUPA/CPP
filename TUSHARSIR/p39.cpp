#include<iostream>
using namespace std;
class Complex
{
    private:
        int real;
        int imag;
    public:
        Complex() : real(1), imag(-1){
        
        }
        Complex(int real, int imag):real(real), imag(imag){
            
        }
        int getReal(){
            return this->real;
        }
        int getImag(){
            return this->imag;
        }
        void setReal(){
            cout<<"Enter real part: ";
            cin>>this->real;
        }
        void setImag(){
            cout<<"Enter imaginary part: ";
            cin>>this->imag;
        }
        void display(){
            cout<<this->real<<" + "<<this->imag<<"i"<<endl;
        }
};

int main(){
    Complex c1, c2(2, 3);
    cout<<"Complex no c1 = ";
    c1.display();
    cout<<"Complex no c2 = ";
    c2.display();
    c1.setReal();
    c1.setImag();
    c1.display();
    cout<<"Complex no c2 = "<<c2.getReal()<<" + "<<c2.getImag()<<"i"<<endl;
    return 0;
}