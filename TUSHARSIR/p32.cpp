#include<iostream>
#include<string>
using namespace std;
typedef struct Book{
    int bookId;
    char title[20];
    float price;

    void read(){
        //fflush(stdin);
        cout<<"Enter Book id: ";
        cin>>bookId;
        cin.ignore();
        cout<<"Enter Book title: ";
        cin.getline(title, 20);
        cout<<"Enter price: ";
        cin>>price;
    }

    void print(){
        cout<<"Enter Book id: "<<bookId<<endl;
        cout<<"Enter Book title: "<<title<<endl;
        cout<<"Enter price: "<<price<<endl;
    }
}book;
int main(){
    book b;
    b.read();
    cout<<"============Book Detail============="<<endl;
    b.print();
    return 0;
}