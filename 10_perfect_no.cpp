#include <iostream>
using namespace std;
int main() {
    int num, sum = 0;
    cout<<"enter a  number: ";
    cin>>num;

    int i = 1;
    while(i < num){
        if(num % i == 0)
            sum = sum + i; //sum of factors
        i++;
    }
    if(sum == num)
        cout<<"perfect no";
    else
        cout<<"not perfect";
    return 0;
}