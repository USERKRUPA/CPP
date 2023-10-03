/*
Create objects c1,c2,c3,c4 of class Complex implemented earlier. Overload necessary operators to execute following statements
c3=c1+c2
c3=c1-c2
c2= -c1
c4= ++c1
c4=c1++

*/
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
        Complex operator +(Complex c){
            Complex ans;
            ans.real = this->real + c.real;
            ans.imag = this->imag + c.imag;
            return ans;
        }
        Complex operator -(Complex c){
            Complex ans;
            ans.real = this->real - c.real;
            ans.imag = this->imag - c.imag;
            return ans;
        }
        Complex operator -(){
            Complex ans;
            ans.real = -this->real;
            ans.imag = -this->imag;
            return ans;
        }
        Complex operator ++(){
            Complex ans;
            ans.real = this->real + 1;
            ans.imag = this->imag + 1;
            return ans;
        }
        Complex& operator++(int){
            Complex ans(*this);
            ans.real = this->real + 1;
            ans.imag = this->imag + 1;
            return ans;
        }
};

int main(){
    Complex c1(1, 2), c2(2, 3), c3, c4(6, 7);
    cout<<"Complex no c1 = ";
    c1.display();
    cout<<"Complex no c2 = ";
    c2.display();
  
    c3 = c1 + c2;
    c3.display();

    c3 = c1 - c2;
    c3.display();

    c2 = -c1;
    c2.display();

    c4 = ++c1;
    c4.display();

   // c4 = c1++;

    return 0;
}