/*
String class
- Identify member functions that should be made constant member function and convert them to constant member functions.
- Identify where all objects should be passed by reference and make the changes.
  Also, make changes at appropriate places, to pass them as reference to constant objects.
*/
#include<iostream>
using namespace std;

class String{
    char *str;
    int len;
    public:
        String(){
            len = 1;
            str = new char[len];
            str[len-1] = '\0'; 
        }
        String(const char str1[]){
            int i;
            for(len = 0; str1[len] != '\0'; len++);
            //len = l;
            str = new char[len + 1];
            for(i = 0; str1[i] != '\0'; i++)
                str[i] = str1[i];
            str[i]='\0';
        }
        void display() const{
            cout<<"string is   : "<<str<<endl;
        }
        bool operator==(const String &obj2){
            for(int i = 0; (str[i] != '\0')||(obj2.str[i] !='\0'); i++){
                if(str[i] != obj2.str[i])
                    return false;
            }      
            return true;
        }
        bool operator!=(const String &obj2){
            if(*this == obj2)
                return false;
            return true;
        }
        bool operator>(const String &obj2){
            for(int i = 0; (str[i] != '\0')||(obj2.str[i] !='\0'); i++){
                if(str[i] <= obj2.str[i])
                    return false;
            }      
            return true;
        }
        bool operator>=(const String &obj2){
            if(*this > obj2 || *this == obj2)
                return true;
            return false;
        }
        bool operator<=(const String &obj2){
            if(*this < obj2 || *this == obj2)
                return true;
            return false;
        }
        bool operator<(const String &obj2){
            if(*this >= obj2)
                return false;
            return true;
        }
};

int main(){
    String obj1("xyz"), obj2("xyz" );
    obj1.display();
    obj2.display();

    if(obj1 == obj2)
        cout<<"Both strings are equal"<<endl;
    else 
        cout<<"Both strings are not equal"<<endl;

    if(obj1 >= obj2)
        cout<<"First string is greater than or equal second"<<endl;
    else 
        cout<<"First string is less than second"<<endl;
    return 0;
}