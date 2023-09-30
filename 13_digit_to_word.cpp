
#include <iostream>
using namespace std;
int main() {
    int num, d, rev = 0, count = 0;
    cout<<"enter number: "<<endl;
    cin>>num;
    
    while(num != 0){
        d = num % 10;
        rev = rev * 10 + d;
        num /= 10;
        count++;
    }
    while(rev != 0){
        d = rev % 10;
        switch(d){
            case 0: cout<<"Zero";
                    break;
            case 1: cout<<"One";
                    break;
            case 2: cout<<"Two";
                    break;
            case 3: cout<<"Three";
                    break;
            case 4: cout<<"Four";
                    break;
            case 5: cout<<"Five";
                    break;
            case 6: cout<<"Six";
                    break;
            case 7: cout<<"Seven";
                    break;
            case 8: cout<<"Eight";
                    break;
            case 9: cout<<"Nine";
                    break;
            }          
        rev /= 10;
    }
    return 0;
}