#include<iostream>
using namespace std;
void fibonacci(int n);
int main(){
    int term;
    cout<<"Enter number of terms: "<<endl;
    cin>>term;
    fibonacci(term);
    return 0;
}
void fibonacci(int n){
    int a = 0, b = 1, c, i;
    cout<<a<<"\t"<<b<<"\t";
    for(i = 3; i <= n; i++){
        c = a + b;
        cout<<c<<"\t";
        a = b;
        b = c;
    }
    cout<<endl;
}