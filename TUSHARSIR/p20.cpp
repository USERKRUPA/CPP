#include<iostream>
#define PI 3.142
using namespace std;

int fact(int);
int power(int, int);

int main(){
    float sum = 0, term, ans = 0, x;
    int i, n;
    cout<<"Enter terms: "<<endl;
    cin>>n;
    x = 180 / PI;
    for(i = 1; i <= n; i++){
        if(i % 2 != 0){
            term = power(x, i) / fact(i);
            if(i == 1 || i == 5 || i == 9)
                ans += term;
            else
                ans -= term;
        }
    }
    cout<<"sin(x)"<<ans<<endl;
    return 0;
}

int fact(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int power(int base, int pow){
    int mul = 1;
    for(int i = 1; i <= pow; i++){
        mul *= base;
    }
    return mul;
}