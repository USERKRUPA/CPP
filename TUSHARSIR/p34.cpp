#include<iostream>
#include<cstring>
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
        cin.getline(title, 20, '\n');
        cout<<"Enter price: ";
        cin>>price;
    }
    void print(){
        cout<<"Enter Book id: "<<bookId<<endl;
        cout<<"Enter Book title: "<<title<<endl;
        cout<<"Enter price: "<<price<<endl;
    }
    void copyByElement(struct Book b){
        this->bookId = b.bookId;
        strcpy(this->title,b.title);
        this->price = b.price;
    }
    Book copy(struct Book b){
        return b;
    }
}book;
int main(){
    book b1, b2, b3;
    cout<<"Enter Book Detail: "<<endl;
    b1.read();
    b2.copyByElement(b1);
    cout<<"===After Copy Operation(Element By element)==="<<endl;
    b2.print();
    b3 = b3.copy(b2);
    cout<<"===After Copy Operation(structure)==="<<endl;
    b3.print();
    return 0;
}