#include<iostream>
#include<iomanip>
using namespace std;
void getDate(int &dd, int &mm, int &yy);
int main(){
    int d, m, y;
    getDate(d, m, y);
    cout<<"Date is: "<<setw(2)<<setfill('0')<<d<<"/"<<setw(2)<<setfill('0')<<m<<"/"<<setw(2)<<setfill('0')<<y<<endl;
    return 0;
}
void getDate(int &dd, int &mm, int &yy){
    cout<<"Enter day: ";
    cin>>dd;
    cout<<"Enter month: ";
    cin>>mm;
    cout<<"Enter year: ";
    cin>>yy;
}