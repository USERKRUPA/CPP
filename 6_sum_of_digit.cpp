#include <iostream>
using namespace std;
int main() {
    int num, i, result = 0;
    cout<<"enter a  number: ";
    cin>>num;
    while(num > 0){
       int rem = num % 10;
        result =  result + rem; 
        num = num / 10;
    }
    cout<<result;
    
    return 0;
}