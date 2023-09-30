#include <iostream>
using namespace std;
int main(void) {
    int num, i, rem, rev = 0;
    cout<<"enter a  number: ";
    cin>>num;s
    while(num != 0){
        rem = num % 10;
        rev =  (rev * 10)  + rem; 
        num = num / 10;
    }
    cout<<rev;
    
    return 0;
}