#include<iostream>
#include<cstring>
using namespace std;
int stringLen(char *s);
void stringCopy(char *str, char *tmp);
void sort(char **s, int n);
int stringCmp(char *s1, char *s2);
int main(){
    int n, i, l, j ;
    cout<<"Enter number of strings you want to enter: "<<endl;
    cin>>n;
    char *str[n], *t, tmp[30];
    
    cout<<"Enter "<<n<<" strings";
    for(i = 0; i <= n-1; i++){
        cin>>tmp;
        l = stringLen(tmp);
        str[i] = (char *)malloc(sizeof(char)*l+1);
        stringCopy(str[i], tmp);
    }
    cout<<"======Before Sort====="<<endl;
    for(i = 0; i < n; i++){
        cout<<str[i]<<endl;
    }
    sort(str,n);
    cout<<"======After Sort====="<<endl;
    for(i = 0; i < n; i++){
        cout<<str[i]<<endl;
    }
    for(i = 0; i < n; i++){
        free(str[i]);
    }

    return 0;
}
int stringLen(char *s){
    int i;
    for(i = 0; s[i] != '\0'; i++);
    return i;
}
void stringCopy(char *str, char *tmp){
    int i;
    for(i = 0; tmp[i] != '\0'; i++){
        str[i] = tmp[i];
    }
}
void sort(char *str[], int n){
    int i, j;
    char *t = NULL;
    for (i = 0; i < n; i++){
        for (j = i+1 ; j <= n-1; j++){
            if(stringCmp(str[i], str[j]) > 0){
                t = str[i];
                str[i] = str[j];
                str[j] = t;
            }
        }   
    }
    
}

int stringCmp(char *s1, char * s2){
    int i, j, l1, l2;
    l1 = stringLen(s1);
    l2 = stringLen(s2);
    
    if(l1 == l2){
        for(i = 0; s1[i] != '\0'; i++){
            if((s1[i]-s2[i]) > 0)
                break;
        }
        if(i != l1)
            return 1;
        else
            return 0;
    }  
    else if(l1 > l2)
        return 1;
    else   
        return 0;
}

