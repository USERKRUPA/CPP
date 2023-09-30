#include <iostream>
using namespace std;
int main() {
    int num, org, i, count = 0, rem, mul, result = 0;
    do{
        cout<<"enter a positive number: ";
        cin>>num;
    }while(num < 0);
    org = num;          
    while(num != 0){
        count++;
        num = num / 10;
    }
    num = org;
    while(num != 0){
        rem = num % 10;
        i = 1;
        mul = 1;
        while(i <= count){
            mul = mul * rem;
            i++;
        }
        result = result + mul;
        num = num / 10;
    }
    if(result == org)
        cout<<"armstrong no"<<endl;
    else
        cout<<"not armstrong no"<<endl;
    return 0;
}