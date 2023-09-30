#include <iostream>
using namespace std;
int main() {
    int num,fact,i;
    cout<< "enter a  number: ";
    cin>> num;
    i=1;
    
    while(i<=num){
        int result=num % i;
        if(result==0){
            cout<<i<<",";
            
        }
        i++;
    }
    return 0;
}