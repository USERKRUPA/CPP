#include<iostream>
#include<cstring>
using namespace std;
void search(char *str, char ch){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ch){
            count++;
        }
    }
    cout<<ch<<" found "<<count<<" times in \""<<str<<"\""<<endl;
}
int spaceCount(char *str){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            count++;
        }
    }
    return count;
}
int wordCount(char *str){
    int wcount = 1;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            wcount++;
        }
    }
    return wcount;
}
int vowelCount(char *str){
    int vcount = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            vcount++;
        }
    }
    return vcount;
}
int main(){
    char str[20], ch;
    int count = 0;
    cout<<"Enter your string: ";
    cin.getline(str, 20);
    //getline(cin,str);
    fflush(stdin);
    cout<<"Enter character to search: ";
    cin>>ch;
    search(str, ch);
    cout<<"Blank space in \""<<str<<" \" is "<<spaceCount(str)<<" times"<<endl;
    cout<<"Total number of words in \""<<str<<" \" is "<<wordCount(str)<<endl;
    cout<<"Total number of vowels in \""<<str<<" \" is "<<vowelCount(str)<<endl;
    return 0; 
}