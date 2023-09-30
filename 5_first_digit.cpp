#include <iostream>
using namespace std;
int main(void) {
    int num, i, rem, result = 0;
    cout<<"enter a  number: ";
    cin>>num;
    while(num != 0){
        rem = num % 10;
        num = num / 10;
    }
    cout<<rem;
    
    return 0;
}