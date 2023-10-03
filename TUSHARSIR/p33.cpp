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
        cin.getline(title, 20, '\n');
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
    int n, i;
    cout<<"enter number of books to get details ";
    cin>>n;
    book b[n];
    for(i = 0; i < n; i++)
        b[i].read();
    
    for(i = 0; i < n; i++){
        cout<<"============Book Detail "<<i+1<<" ============"<<endl;
        b[i].print();
    }
    return 0;
}