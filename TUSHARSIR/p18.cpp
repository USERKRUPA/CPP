#include<iostream>
using namespace std;
void charLine(char ch,int l);
int main()
{
    char c;
    int num;
    cout<<"enter the number: ";
    cin>> num;
    cout<<"enter the character you want to print:  ";
    cin>>c;
    charLine(c,num);
    cout<<"\tData Type\tSize in Bytes\n";
    charLine(c,num);
    cout<<"\tInteger\t\t\t "<<sizeof(int)<<endl;
    charLine(c,num);
    cout<<"\tCharacter\t\t "<<sizeof(char)<<endl;
    charLine(c,num);
    cout<<"\tFloat\t\t\t "<<sizeof(float)<<endl;
    charLine(c,num);
    return 0;
}

void charLine(char ch='_',int l=30){
    for(int i=1;i<=l;i++){
        cout<<ch;
    }
    cout<<endl;
}