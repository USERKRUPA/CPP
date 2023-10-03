#include<iostream>
#include<cstring>
using namespace std;

class Account{
        static int account_count;
        char acc_type;
        char acc_name[20];
        int acc_no;
        float acc_balance;
    public:
        Account(); //default constructor
        Account(char acctype, char *accnm, int accno, float accbal); //parameterized
        ~Account(); //destructor
        void debit(float);
        void credit(float);
        void display(); //to view details of account
        //getter
        //inc
};
int Account::account_count = 1;


Account::Account(){
    acc_type = 0;
    acc_name[0] = '\0';
    acc_no = 0;
    acc_balance = 0;
}
Account::Account(char acctype, char *accnm, int accno, float accbal){
    acc_type = acctype;
    strcpy(acc_name, accnm);
    acc_no = accno;
    acc_balance = accbal;
    cout<<"Your account has been created!!!"<<endl;
    //inc
}
void Account :: debit(float amount){
    if((acc_balance - amount) < 500){
        cout<<amount <<" can not be withdrawn from your account."<<endl;
        if((acc_balance - amount) < 0)
            cout<<"You can not withdraw money...."<<endl;
        else
            cout<<"You can withdraw "<<acc_balance-amount<<" amount only..."<<endl;
    }
    else{
        acc_balance = acc_balance - amount;
        cout<<"Your account balance is "<<acc_balance<<" rs."<<endl;
    }
}
void Account :: credit(float amount){ 
    acc_balance = acc_balance + amount;
    cout<<"Your account balance is "<<acc_balance<<" rs."<<endl;
}
void Account :: display(){
    cout<<"=========Account Details==========="<<endl;
    cout<<"Account Type: "<<acc_type<<endl;
    cout<<"Account Name: "<<acc_name<<endl;
    cout<<"Account Number: "<<acc_no<<endl;
    cout<<"Account Balance: "<<acc_balance<<endl;
}
int main(){
    Account *a1;
    int choice;
    float bal, amt;
    char type;
    char name[20];
    do{
        cout<<"1. Create Account\n2. View Details\n3. Withdraw money\n4. Deposit Money\n5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>> choice;
        switch(choice){
            case 1:
                    no++;
                    do{
                        cout<<"Enter type of account from following:\nEnter s For Saving\nEnter c for Current"<<endl;
                        cin>>type;
                        if(type =='c' || type == 's')
                            break;
                    }while(1);
                    cout<<"Enter your name: ";
                    cin>>name;
                    if(type == 's') 
                        bal = 0.00;
                    else    
                        bal = 1000.00;
                    a1 = new Account(type, name, no, bal);
                    //char acctype, char *accnm, int accno, float accbal
                    break;
            case 2:
                    a1->display();
                    break;
            case 3:
                    cout<<"Enter amount to withdraw: ";
                    cin>>amt;
                    a1->debit(amt);
                    break;
            case 4:
                    cout<<"Enter amount to deposit: ";
                    cin>>amt;
                    a1->credit(amt);
                    break;
            case 5:
                    exit(0);
            default:
                    cout<<"Invalid choice...."<<endl;
        }

    }while(choice);

    return 0;
}