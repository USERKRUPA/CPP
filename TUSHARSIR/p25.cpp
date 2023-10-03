#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n];
    int post;
    
    for(int i =0 ; i<n; i++){
        cin>>arr[i];
        
    }
    cout<<"Enter position to be deleted";
    cin>>post;
    for(int i =post-1; i<n;i++){
        arr[i]= arr[i+1];
    }
    for(int i=0;i<n-1;i++)
{
    cout<<arr[i]<<endl;
}
return 0;
}