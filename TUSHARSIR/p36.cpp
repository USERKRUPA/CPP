#include<iostream>
using namespace std;
void swap(int &, int &);
int main(){
    int no1, no2;
    cout<<"Enter no1: "<<endl;
    cin>>no1;
    cout<<"Enter no1: "<<endl;
    cin>>no2;
    cout<<"====Before Swapping===="<<endl;
    cout<<"no1= "<<no1<<endl<<"no2= "<<no2<<endl;
    swap(no1, no2);
    cout<<"====After Swapping===="<<endl;
    cout<<"no1= "<<no1<<endl<<"no2= "<<no2<<endl;
    return 0;
}
void swap(int &n1, int &n2){
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
}
