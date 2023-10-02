/*
Array class
- Identify member functions that should be made constant member function and convert them to constant member functions.
- Identify where all objects should be passed by reference and make the changes.
  Also, make changes at appropriate places, to pass them as reference to constant objects.
*/
#include<iostream>
using namespace std;

class Array{
    int size;
    int *adata;
    
    public:
        Array():size(5){
            adata = new int[size];
            *adata = 0;
        }
        Array(int n):size(n){
            adata = new int[size];
            *adata = 0;
        }
        void copyArray(int *dest, int *src, int n){
            for(int i = 0; i < n; i++){
                dest[i] = src[i];
            }
        }
        Array(const Array &arr):size(arr.size){
            delete[] adata;
            adata = new int[size];
         
         //Error calling to memeber fun as argument arr is constant
         //To solve this error make function as constant to which u want to call 
         // here it is getval() as it doesn't modify value of Array object
            cout<<"Array Size is:"<<arr.getVal()<<endl;
            copyArray(adata, arr.adata, size);
        }
        ~Array(){
            cout<<"memory freed.. "<<endl;
            delete[] adata;
        }
        void set(){
            cout<<"Enter data for array of size "<<size<<endl;
            for(int i = 0; i < size; i++){
                cout<<"a["<<i<<"]: ";
                cin>>adata[i];
            }
        }
        int getVal() const{
            return size;
        }
        void display() const{
            cout << "Array Data is: "<<endl;
            for(int i = 0; i < size; i++){
                cout << adata[i] << " ";
            }
            cout<<endl;
        }
        int& operator[] (int index){
            static int temp;
            if(index >= size && index <= 0)
                return temp;
            return adata[index];
        }
        Array& operator= (const Array &arr){
            delete[] adata;
            size = arr.size;
            adata = new int[size];
            copyArray(adata, arr.adata, size);
            return *this;
        }
};
int main(){
   /* Array a1, a2(3), a3(a1);
    a1.display();
    a2.display();
    a3.display();
    
    a1[0] = 1;
    a1.display();
    //a1 = {2, 3, 4, 5}; //not possible
    a2[-1] = 4;
    a2.display();
    */
    Array a3, a4(5), a5(a4);
    a3.set();
    a3.display();
    a4 = a3;
    a4.display();
    
    return 0;
}