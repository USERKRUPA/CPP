#include <iostream>
using namespace std;
int main() {
    int num, org, count = 0, rem, mul, result = 0;
    cout<<"enter a  number: ";
    cin>>num;
    org = num;          
    while(num != 0){
       // rem = num % 10;
        count++;
        num = num / 10;
    }
    num = org;
    while(num != 0){
        rem = num % 10;
        for(int i = 1, mul = 1; i <= count; ++i)
        {
            mul = mul * rem;
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

