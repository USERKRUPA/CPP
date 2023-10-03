#include<iostream>
using namespace std;
int add(int n1, int n2);
float add(float n1, float n2);
double add(double n1, double n2);
int main(){
    int no1, no2;
    float fno1, fno2;
    double dno1, dno2;
    int choice;
    do{
        cout<<"1 Add Integer Data\n2 Add Float Data\n3 Add Double Data\n4 Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                    cout<<"Enter no1(integer): "<<endl;
                    cin>>no1;
                    cout<<"Enter no2(integer): "<<endl;
                    cin>>no2;
                    cout<<"Addition of integer data is: "<<add(no1, no2)<<endl;
                    break;
            case 2:
                    cout<<"Enter no2(float): "<<endl;
                    cin>>fno1;
                    cout<<"Enter no2(float): "<<endl;
                    cin>>fno2;
                    cout<<"Addition of float data is: "<<add(fno1, fno2)<<endl;
                    break;
            case 3:
                    cout<<"Enter no1(double): "<<endl;
                    cin>>dno1;
                    cout<<"Enter no2(double): "<<endl;
                    cin>>dno2;
                    cout<<"Addition of double data is: "<<add(dno1, dno2)<<endl;
                    break;
            case 4:
                    exit(0);
            default:
                    cout<<"Enter valid input"<<endl;
        }
        cout<<"Enter 0 to exit"<<endl;
        cin>>choice;
    }while(choice);
    return 0;
}

int add(int n1, int n2){
    return n1 + n2;
}

float add(float n1, float n2){
    return n1 + n2;
}

double add(double n1, double n2){
    return n1 + n2;
}