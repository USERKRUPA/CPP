#include<iostream>
using namespace std;
class Complex
{
    private:
        int real;
        int imag;
        static int count;
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
        static int countObjects(){
            count++;
            return count;
        }
};
int Complex :: count = 0;
int main(){
    Complex c1, c2(2, 3);
    cout<<"Complex no c1 = ";
    c1.display();
    cout<<"Complex no c2 = ";
    c2.display();
    c1.setReal();
    c1.setImag();
    cout<<"No of objects: "<<Complex::countObjects()<<endl;
    c1.display();
    cout<<"No of objects: "<<Complex::countObjects()<<endl;
    cout<<"Complex no c2 = "<<c2.getReal()<<" + "<<c2.getImag()<<"i"<<endl;

    return 0;
}