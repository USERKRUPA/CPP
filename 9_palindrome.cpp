#include <iostream>
using namespace std;
int main() {
    int num, org, rem, rev = 0;
    cout<<"enter a  number: ";
    cin>>num;
    org = num;
    while(num != 0){
        rem = num % 10;
        rev =  rev * 10 + rem; 
        num = num / 10;
    }
    if(rev == org)
        cout<<"palindrome no";
    else
        cout<<"not palindrome";
    return 0;
}