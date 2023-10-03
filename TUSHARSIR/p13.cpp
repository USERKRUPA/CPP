#include<iostream>
using namespace std;
int main(void){
    int strt, end, n, i;
    cout<<"Enter starting positive no: ";
    cin>>strt;
    cout<<"Enter last positive no: ";
    cin>>end;
    n = strt; 
    while(n <= end){
        i = 2;
        while(i < n){
            if(n % i == 0){
                break;
            }
            i++;
        }
        if(i == n){
            cout<<n<<",";
        }
        n++;
    }
    return 0;
}