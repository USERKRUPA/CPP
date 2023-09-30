#include<iostream>
using namespace std;
int cnt;
int reverse_no(int no);
void print_words(int no);
void print_digit(int d);
void print_tenth_value(int c);
void print_11_series(int c);
void print_placevalue(int cnt);
int main(void){
    int no, rev;
    cout<<"Enter no: ";
    cin>>no;
    rev = reverse_no(no);
  //  printf("\nreverse=%d\n", rev);
    print_words(rev);
    return 0;
}
int reverse_no(int no){
    int dig, res = 0;
    cnt = 0;
    while(no != 0){
        dig = no % 10;
        res = res * 10 + dig;
        cnt++;
        no /= 10;
    }
    return res;
}
void print_words(int no){
    int dig;
    while(no != 0 && cnt >= 1){
        dig = no % 10;
        if(cnt == 4){
            print_digit(dig);
            print_placevalue(cnt); 
        }
        else if(cnt == 3){
            print_digit(dig);
            print_placevalue(cnt);        
        }
        else if(cnt == 2){
            print_tenth_value(no);      
        }
        else{
            print_digit(dig);
        }
        no /= 10;
        cnt--;
    }
}
void print_digit(int d){
    switch(d){
        case 0: cout<<"zero "; break;
        case 1: cout<<"One "; break;
        case 2: cout<<"Two "; break;
        case 3: cout<<"Three "; break;
        case 4: cout<<"Four "; break;
        case 5: cout<<"Five "; break;
        case 6: cout<<"Six "; break;
        case 7: cout<<"Seven "; break;
        case 8: cout<<"Eight "; break;
        case 9: cout<<"Nine "; break;
    }
}
void print_tenth_value(int c){
    switch(c%10){
        case 1: if(c == 1){
                    cout<<"Ten ";
                }
                else{
                    print_11_series(c);
                    cnt = 0;
                }
                 break;
        case 2: cout<<"Twenty "; break;
        case 3: cout<<"Thirty "; break;
        case 4: cout<<"Fourty "; break;
        case 5: cout<<"Fifty "; break;
        case 6: cout<<"Sixty "; break;
        case 7: cout<<"Seventy "; break;
        case 8: cout<<"Eighty "; break;
        case 9: cout<<"Ninty "; break;
    }
}
void print_11_series(int c){
    switch((c/10)%10){
        case 1: cout<<"Eleven "; break;
        case 2: cout<<"Tewelve "; break;
        case 3: cout<<"Thirteen "; break;
        case 4: cout<<"Fourteen "; break;
        case 5: cout<<"Fifteen "; break;
        case 6: cout<<"Sixteen "; break;
        case 7: cout<<"Seventeen "; break;
        case 8: cout<<"Eighteen "; break;
        case 9: cout<<"Nineteen "; break;
    }
}
void print_placevalue(int cnt){
    switch (cnt)
    {
        case 3: cout<<"Hundred ";
                break;
        case 4: cout<<"Thousands ";
                break;
    }
}