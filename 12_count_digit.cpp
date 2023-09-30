#include <iostream>
using namespace std;
int main() {
    int num, rem, digit, i, cnt = 0;
    cout<<"enter a  number: ";
    cin>>num;
    cout<<"enter a digit to find: ";
    cin>>digit;
    while(num != 0){
        rem = num % 10;
        if(rem == digit){
            cnt++;
        }
        num /= 10;
    }
    cout<<digit<<" is found "<<cnt<<" times.";
    return 0;
}