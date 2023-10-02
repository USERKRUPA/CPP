/*
Date class
- Identify member functions that should be made constant member function and convert them to constant member functions.
- Identify where all objects should be passed by reference and make the changes.
  Also, make changes at appropriate places, to pass them as reference to constant objects.
*/

#include<iostream>
using namespace std;

class Date{
    int day;
    int month;
    int year;
    public:
        Date():day(1), month(1), year(2023){
        }
        Date(int d, int m, int y): day(d), month(m), year(y){
        }
        Date(const Date &d){
            this->day = d.day;
            this->month = d.month;             
            this->year = d.year;
        }
        ~Date(){
            cout<<"Destructor Called..."<<endl;
        }
        void Read(){
            cout<<"Enter Day: ";
            cin>>day;
            cout<<"\nEnter Month: ";
            cin>>month;
            cout<<"\nEnter year: ";
            cin>>year;
        }
        void Write() const{
            cout<<"Date: ";
            cout<<day<<"-"<<month<<"-"<<year<<endl;
        }
        bool operator==(const Date &obj2){
            if((day == obj2.day) && (month == obj2.month) && (year == obj2.year)){
                return true;
            }
            else 
                return false;
        }
        bool operator>(const Date &d){
            if(year > d.year)
                return true;
            else if(month > d.month)
                return true;
            else if(day > d.day)
                return true;
            else  
                return false;
        }
        bool operator>=(const Date &d){
            if(*this == d || *this > d)
                return true;
            return false;
        }
        bool operator<(const Date &d){
            if(year < d.year)
                return true;
            else if(month < d.month)
                return true;
            else if(day < d.day)
                return true;
            else  
                return false;
        }
        bool operator<=(const Date &d){
            if(*this == d || *this < d)
                return true;
            return false;
        }
        bool operator!=(const Date &d){
            if(*this == d)
                return false;
            return true;
        }
};

int main(){
    Date d1, d2;
    d1.Read();
    cout<<"Date 1 is: "<<endl;
    d1.Write();

    d2.Read();
    cout<<"Date 2 is: "<<endl;
    d2.Write();

    if(d1 > d2)
        cout<<"Date 1 is greater than Date 2."<<endl;
    else
        cout<<"Date 1 is less than Date 2."<<endl;

    if(d1 == d2)
        cout<<"Date 1 is equal to Date 2."<<endl;
    else
        cout<<"Date 1 is not equal to Date 2."<<endl;
    return 0;
}