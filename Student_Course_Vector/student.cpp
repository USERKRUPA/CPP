#include<iostream>
#include<string>
#include"course.h"
#include"InvalidDataException.h"
#include<vector>

using namespace std;
class student{
    int roll_no;
    string name;
    string mobile_no;
    vector<Course *> enrolledCourses;

    public:
        student(int roll_no, string name, string mobile_no){
            this->roll_no = roll_no;
            this->name = name;
            this->mobile_no =mobile_no;
        }
        int getRollNo() const{
            return roll_no;
        }
        string getName() const{
            return name;
        }
        string getMobileNo() const{
            return mobile_no;
        }
        vector<Course *> &getEnrolledCourses(){
            return enrolledCourses;
        }
        void display(){
            cout<< "Roll no: " << this->getRollNo() << 
                ", Name: "<< this->getName() <<
                ", Mobile no: " << this->getMobileNo();
            vector<Course *> vc = this->getEnrolledCourses();
            cout<< ", Enrolled courses: [ " ;
            for(int j = 0; j < vc.size(); j++){
                cout << vc.at(j)->getCourseName() << ", "; 
            }
            cout <<" ]"<< endl;
        }
};

//display available courses
void print_courses(vector<Course *> &courses){
    for(int i = 0; i < courses.size(); i++){
        courses[i]->display();
    }
}

//display all student details with enrolled courses
void displayAllStudents(vector<student*> students, vector<Course *> courses){
    for(int i = 0; i < students.size(); i++){
        student *s = students.at(i);
        s->display();
    }
}

//check for duplication of student
void chkDupStudent(int rno, vector<student *> &students)/* throw(InvalidDataException)*/{
    for(int i = 0; i < students.size(); i++){
        if(students.at(i)->getRollNo() == rno){
            throw InvalidDataException("Roll no is already exists");
        }
    }
  //  cout<<"no duplicate student.."<<endl;
}

//register a student
void registerStudent(int rno, string nm, string mono, vector<student *> &students){
    if(!students.empty()){
        chkDupStudent(rno, students);         
    }
    if(mono.length() < 10)
        throw InvalidDataException("Invalid mobile no:");
    students.push_back(new student(rno,nm,mono));
}

//check whether course entered is valid or invalid
int chkCourse(string course, vector<Course *> &courses){
    for(int i = 0; i < courses.size(); i++){
        if(courses.at(i)->getCourseName() == course){
            return courses.at(i)->getFees();
        }
    }
    throw InvalidDataException("No such course available");
}

//check entered course and assign course if valid
void chkAndSetStdEnrolledInCourse(string course, student *stud, vector<Course *> &courses) /*throw(InvalidDataException)*/{
    int fees = chkCourse(course, courses);
    if(stud->getEnrolledCourses().size() != 0){
        for(int j = 0; j < stud->getEnrolledCourses().size(); j++){
            if(course == stud->getEnrolledCourses().at(j)->getCourseName()){
                throw InvalidDataException("Course has already been taken");
            }
        }
    } 
    stud->getEnrolledCourses().push_back(new Course(course, fees));
    cout<<"Student assigned a course:"<<endl;
}

//take course
void takeCourse(int rno, vector<student*> &students, vector<Course*> &courses){
    int i;
    string course;
    // if(students.empty()){
    //     throw InvalidDataException("Registration is compulsory to take course:");
    // }
    for(i = 0; i < students.size(); i++){
        if(students.at(i)->getRollNo() == rno){
            cout<<"No of courses available are: "<<endl;
            print_courses(courses);
            cout<<"Enter name of course you want to take: "<<endl;
            cin>>course;
            chkAndSetStdEnrolledInCourse(course, students.at(i), courses);
            break;
        }
    }
    if(i  == students.size())
        throw InvalidDataException("Registration is compulsory to take course:");
    
}

int main(){
    try{
        bool exit = true;
        int i,choice, rno, fees, flag = 0;
        string nm, mono, course;
        vector<Course *> courses;
     //   cout<<"size: "<<courses.size()<<endl;
        courses = {new Course("DAC", 100000), new Course("DBDA", 150000), new Course("DMC", 95000)};
        
        vector<student *> students;
       // cout<<"size: "<<courses.size()<<endl;
        while(exit){
            try{
            cout<<"1. Register student."<<
            "\n2. Take course"<<
            "\n3. Display specific student's enrolled courses"<<
            "\n4. display all students with enrolled courses"<<
            "\n5. exit\n";
            cout<<"Enter your choice: ";
            cin>>choice;
            switch(choice){
                case 1: //register student
                    cout<<"Enter roll_no(int), student name(string), mobile_no(string)"<<endl;
                    cin>>rno>>nm>>mono;
                    registerStudent(rno, nm, mono, students);
                   // students.push_back(s);
                    cout<<"data inserted:"<<endl;  
                    break;
                case 2: //take course
                    cout<<"Enter rollno: "<<endl;
                    cin>>rno;
                    takeCourse(rno, students, courses);
                    break;
                case 3://Display specific student's enrolled courses
                    cout<<"Enter roll no: ";
                    cin >> rno;
                    for(i = 0; i < students.size(); i++){
                        if(students.at(i)->getRollNo() == rno){
                            cout<<"Student Details: "<<endl;
                            students.at(i)->display();
                            break;
                        }
                    }
                    break;
                case 4:
                    displayAllStudents(students, courses);
                    break;
                case 5:
                    exit = false;
                    break;
                default:
                    cout<<"Enter valid choice: "<<endl;
            }
            }
            catch(InvalidDataException e){
                cout<<"error::"<<e.getMessage()<<endl;
            }
        }
    }
    catch(...){
        cout<<"Outer catch block..."<<endl;
    }
    return 0;
}