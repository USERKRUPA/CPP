#include<iostream>
#include<string>
using namespace std;
class Course{
    string cname;
    int fees;

    public:
    Course(string cname, int fees){
        this->cname = cname;
        this-> fees =fees;
    }
    Course(){
        this->cname = '\0';
        this->fees = 0;
    }
    // void setCourse(){
    //     string name;
    //     int fees;
    //     cout<<"Enter course name: ";
    //     cin>>name;
    //     cout<<"Enter fees: ";
    //     cin>>fees;
    //     this->cname = name;
    //     this->fees = fees;
    // }
    string getCourseName() const{
        return this->cname;
    }
    int getFees() const{
        return this->fees;
    }

    void display() const{
        cout<<"course: [ name = "<< cname<< " fees = "<< fees<< " ]"<<endl;
    }
};