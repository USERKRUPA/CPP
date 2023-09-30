#include<iostream>
using namespace std;
int main(){
    int n, m, sum = 0;
    cout<<"Enter starting positive integer: ";
    cin>>n;
    cout<<"Enter last positive integer: ";
    cin>>m;
    int i = n;
    while(i <= m){
        sum = sum + i;
        i++;
    }
    cout<<"sum of numbers between "<<n<<" and "<<m<<" is: "<<sum<<endl;
    return 0;
}