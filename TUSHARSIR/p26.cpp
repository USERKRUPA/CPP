#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n];
    int post,val;
    for(int i =0 ; i<n; i++){
        cin>>arr[i];
        
    }
    cout<<"Enter position to be inserted";
    cin>>post;
    cout<<"enter the value to be inserted: ";
    cin>>val;
    for(int i = n-1 ; i >= post-1 ; i--){
        arr[i+1]= arr[i];
    }
    arr[post-1]=val;
    n++;
    for(int i = 0 ; i<n;i++)
{
    cout<<arr[i]<<endl;
}    


return 0;
}