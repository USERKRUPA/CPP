#include<iostream>
#include<cstring>
using namespace std;

class Employee
{
		int emp_id;
		char emp_name[20];
		double salary;
	public:
		Employee();
		Employee(int, char [], double);
		void Accept();
		void Display() const;
};

Employee :: Employee() : emp_id(0), salary(0){
    emp_name[0] = '\0';
}

Employee :: Employee(int eid, char nm[], double sal): emp_id(eid), salary(sal){
    strcpy(emp_name, nm);
}

void Employee :: Accept(){
	cout<<"Enter Employee id: "<<endl;
	cin>>emp_id;
	cout<<"Enter Employee name: "<<endl;
	cin>>emp_name;
	cout<<"Enter Employee salary: "<<endl;
	cin>>salary;
}

void Employee :: Display() const{
	cout<<"Employee id: "<<emp_id<<endl;
	cout<<"Employee name: "<<emp_name<<endl;
	cout<<"Employee salary: "<<salary<<endl;
}

int main(){
	char str[20];
	strcpy(str, "Krupa");
	Employee e1, e2(102, str, 60000);
	cout<<"Employee 2: "<<endl;
	e2.Display();
	cout<<"Enter Employee 1 Detail: "<<endl;
	e1.Accept();
	cout<<"Employee 1: "<<endl;
	e1.Display();
	cout<<"Enter Employee 2 Detail: "<<endl;
	e2.Accept();
	cout<<"Employee 2: "<<endl;
	e2.Display();
    return 0;
}
