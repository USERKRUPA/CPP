#include<iostream>
#include<cstdlib>
using namespace std;
class Array{
    private:
	    int size;
	    int *arr;
        void copyArray(int *dest, int *src, int size){
            for(int i = 0; i < size ; i++){
                dest[i] = src[i];
            }
        }
    public:
        Array() : size(5){
            arr = new int[size];
            *arr = 0;
        }
        Array(int size) : size(size){
            arr = new int[size];
            *arr = 0;   
        }

        //If object is passed by value then it goes into recursion that is it calls copy constructor.
        Array(const Array &a): size(a.size){
            cout<<"Copy constructor..."<<endl;
         //   delete[] arr;
            arr = new int[size];
            copyArray(arr, a.arr, size);
        }
        void set(){
            cout<<"Enter "<<size<<" elements:"<<endl;
            for(int i = 0; i < size; i++){
                cout<<"arr["<<i<<"]: "<<endl;
                cin>>arr[i];
            }
        }
        void display() const{
            int i;
            for(i = 0; i < size; i++){
                cout<<"arr["<<i<<"]: "<<arr[i]<<endl;
            }
        }
        ~Array(){
            delete[] arr;
            cout<<"Memory is freed "<<endl;
        }
};
int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    Array a1, a2(n);
    a1.set();
    cout<<"Array Object1"<<endl;
    a1.display();

    a2.set();
    cout<<"Array Object2"<<endl;
    a2.display();

    Array a3(a1);
    cout<<"Array Object3"<<endl;
    a3.display();
    return 0;
}
