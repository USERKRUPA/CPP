#include<iostream>
using namespace std;
int multiply(int n1, int n2, int n3 = 1, int n4 = 1);
int main(){
    int no1, no2, no3, no4, terms, ans;
    
    do
    {
        fflush(stdin);
        cout<<"Enter how many no(2-4) u wnat to multiply: ";
        cin>>terms;
        while(terms < 2 && terms > 4){
            cout<<"Enter term value between 2 to 4";
            cin>>terms;
        }
        cout<<"Enter no1: ";
        cin>>no1;
        cout<<"Enter no2: ";
        cin>>no2;
        switch(terms){
            case 2:
                    ans = multiply(no1, no2);
                    break;
            case 3:
                    cout<<"Enter no3: ";
                    cin>>no3;
                    ans = multiply(no1, no2, no3);
                    break;
            case 4:
                    cout<<"Enter no3: ";
                    cin>>no3;
                    cout<<"Enter no4: ";
                    cin>>no4;
                    ans = multiply(no1, no2, no3, no4);
                    break;
            default:
                    cout<<"enter valid input";
        }
        cout<<"Result is: "<<ans<<endl;
        cout<<"Press -1 to exit"<<endl;
        cin>>terms;
    } while (terms != -1);
    return 0;
}
int multiply(int n1, int n2, int n3 , int n4 ){
    return n1 * n2 * n3 * n4;
}
