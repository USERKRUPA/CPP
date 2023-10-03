#include<iostream>
using namespace std;
const int MAX_VALID_YR = 9999;
const int MIN_VALID_YR = 1800;
class Date{
    int day;
    int month;
    int year;
    public:
        Date(){
        }
        Date(int d, int m, int y):day(d), month(m), year(y){
            
        }
        void setDay(int d){
            day = d;
        }
        void setMonth(int m){
            month = m;
        }
        void setYear(int y){
            year = y;
        }
        bool isLeap(int year) const{
            return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
        }
        bool isValidDate(int d, int m, int y) const{
            if (y > MAX_VALID_YR || y < MIN_VALID_YR)
                return false;
            if (m < 1 || m > 12)
                return false;
            if (d < 1 || d > 31)
                return false;
          // Handle February month with leap year
            if (m == 2){
                if (isLeap(y))
                    return (d <= 29);
                else
                    return (d <= 28);
            }
           // Months of April, June, Sept and Nov must have 
           // number of days less than or equal to 30.
            if (m == 4 || m == 6 || m == 9 || m == 11)
                return (d <= 30);    
            return true;
        }
        void setDate(){
            do{
                cout<<"Enter valid Date in dd/mm/yyyy format: ";
                cin>>day;
                cin.get();
                cin>>month;
                cin.get();
                cin>>year;
            }while(!isValidDate(day, month, year));
        }
        int getDay() const{
            return day;
        }
        int getMonth() const{
            return month;
        }
        int getYear() const{
            return year;
        }
        string getDate() const{
            string s;
            s = to_string(day)+"/"+to_string(month)+"/"+to_string(year);
            return s;
        } 
        void display() const{
            cout<<day<<"/"<<month<<"/"<<year<<endl;
        }
};

class Person{
    protected:
        string name;
        Date dob;
        string address;
    public:
        Person(){
        }
        Person(string nm, int dd, int mm, int yy,string add):dob(dd, mm, yy),name(nm), address(add){
        }
        void setName(string nm){
            name = nm;
        }
        void setDate(int d, int m, int y){
            dob.setDay(d);
            dob.setMonth(m);
            dob.setYear(y);
        }
        void setAddress(string add){
            address = add;
        }
        string getName() const{
            return name;
        }
        string getAddress() const{
            return address;
        }      
        void display() const{
            cout<<"Name: "<<name<<"\nDate of Birth: "<<dob.getDate()<<"\nAddress: "<<address;
        }
};

class Student: public Person{
    protected:
        int roll;
        float marks[5];
        float per;
    public:
        Student(){
        }
        Student(string nm, int dd, int mm, int yy,string add,int r): Person(nm, dd, mm, yy, add),roll(r){    
        }
        void setRoll(int roll){
            this->roll = roll;
        }
        void setMarks(){
            cout<<"Enter marks for student: "<<endl;
            for(int i = 0; i < 5; i++){
                cout<<"marks["<<i+1<<"]: ";
                cin>>marks[i];
            }
            setPercentage();
        }
        void setPercentage(){
            float sum = 0;
            for(int i = 0; i < 5; i++){
                sum += marks[i];
            }
            per = sum / 5.0;
        }
        float getPercentage() const{
            return per;
        }
        int getRoll() const{
            return roll;
        }
        float* getMarks(){
            return marks;
        }
        void display()const{
            cout<<"Student Detail: "<<"\n";
            Person::display();
            cout<<"\nRoll No: "<<getRoll()<<"\n";
            for(int i = 0; i < 5; i++){
                cout<<"marks["<<i+1<<"]: "<<marks[i];
                cout<<"\n";
            }
            cout<<"Percentage: "<<getPercentage()<<"\n";
        }
};

class Employee: public Person{
    protected:
        int eid;
        string dept;
        int salary;
    public:
        Employee(){
        }
        Employee(string nm, int dd, int mm, int yy,string add,int eid, string dept, int sal): Person(nm, dd, mm, yy, add),eid(eid), dept(dept), salary(sal){
        }
        void setEmpid(int eid){
            this->eid = eid;
        }
        void setDept(string dpt){
            this->dept = dpt;
        }
        void setSalary(int sal){
            this->salary = sal;
        }
        int getEmpid() const{
            return this->eid;
        }
        string getDept() const{
            return this->dept;
        }
        int getSalary() const{
            return this->salary;
        }
        void display() const{
            cout<<"\nEmployee Information: "<<endl;
            Person::display();
            cout<<"\nEmployee Id: "<<getEmpid()<<"\nDepartment: "<<getDept()<<"\nSalary: "<<getSalary()<<"\n";
        }
};
int main(){
    Student p1("Krupa Thumar",17,05,1991,"Jetpur, Rajkot, Gujarat", 216);
    p1.setMarks();
    p1.display();

    Employee e1("Krupa R Thumar",17,5,1991,"Jetpur, Gujarat", 1819, "Computer Dept", 25000);
    e1.display();
    return 0;
}