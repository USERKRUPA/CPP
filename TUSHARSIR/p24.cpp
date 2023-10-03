#include<iostream>
using namespace std;
int max(int arr[], int size){
    int max, i;
    max = arr[0];
    for(i = 1; i < size; i++){
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
} 
int min(int arr[],int size){
    int min,i;
    min = arr[0];
    for(i=1; i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
void printArray(int *arr, int n){
    
    for(int i = 0; i < n; i++){
        cout<<"arr["<<i<<"]: "<<*(arr+i)<<endl;
    }
}
void multiply5(int arr[], int n){
    int b[n];
    for(int i = 0; i < n; i++){
        b[i] = arr[i] * 5;
    }
    printArray(b, n);    
}
int main(){
    int i, n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of an array: "<<endl;
    for(i = 0; i < n; i++){
        cout<<"arr["<<i<<"]: ";
        cin>>arr[i];
    }
    cout<<"maximum no is: "<<max(arr, n)<<endl;
    cout<<"minimum no is: "<<min(arr,n)<<endl;
    cout<<"Multiply by 5: "<<endl;
    multiply5(arr, n);
    return 0;
}