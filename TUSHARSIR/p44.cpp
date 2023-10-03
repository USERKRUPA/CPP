/*
Modify class Array  in assignment – 41 to overload below operators
  1. Overloaded [] operator - used to get/set array element e.g. arr[4] gives 4th   index element
	  2. Overloaded ! operator - reverses array elements.
	  3. Overload >> - Accepts array size from user. Also accepts elements of array from user.
	  4. Overload << - Displays array.
*/
#include<iostream>
#include<cstdlib>
using namespace std;
class Array{
    private:
	    int size;
	    int *arr;
    public:
        Array() : size(5){
            arr = (int*)malloc(size * sizeof(int));
            *arr = 0;
        }
        Array(int size) : size(size){
            arr = (int*)malloc(size * sizeof(int));
            *arr = 0;   
        }
        Array(Array &a){
        }
        void display(){
            int i;
            for(i = 0; i < size; i++){
                cout<<"arr["<<i<<"]: "<<arr[i]<<endl;
            }
        }
        ~Array(){
            free(arr);
            cout<<"Memory is freed "<<endl;
        }
};
int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    Array a1, a2(n);
    cout<<"Array Object1"<<endl;
    a1.display();
    cout<<"Array Object2"<<endl;
    a2.display();
    return 0;
}
