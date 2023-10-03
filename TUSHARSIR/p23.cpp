#include<iostream>
using namespace std;
int* max(int *n1, int *n2){
    if(*n1 > *n2)
        return n1;
    else
        return n2;
}

int main(){
    int no1, no2;
    cout<<"Enter no1: "<<endl;
    cin>>no1;
    cout<<"Enter no2: "<<endl;
    cin>>no2;
    int *ans = 0;
    ans = max(&no1, &no2);
    cout<<*ans<<" is max"<<endl;
    
    return 0;
}