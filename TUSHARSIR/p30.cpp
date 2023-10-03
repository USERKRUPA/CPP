#include<iostream>
using namespace std;
int main(){
    int n;
    float *marks, sum = 0, avg;
    cout<<"Enter number of subjects: "<<endl;
    cin>> n;
    marks = (float *)malloc(sizeof(float)*n);
    for(int i = 0; i < n; i++){
        cin>>*(marks+i);
    }
    for(int i = 0; i < n; i++){
        sum += *(marks+i);
    }
    avg = sum / n;
    cout<<"sum = "<<sum<<endl<<"average = "<<avg<<endl;
    free(marks);
    return 0;
}