#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class Branch{
    string branchName;
    string ifscCode;
    long int contacNo;
    public:
        Branch();
        Branch(string branchName, string ifscCode, long int contactNo);
        string getBranchName();
        string getIfscCode();
        long int getContactNo();
        void setBranchName(string bnm);
        void setIfscCode(string);
        void setContactNo(long int);
        void display();
};
Branch :: Branch(){
    branchName = '\0';
    ifscCode = '\0';
    contacNo = 0;
}
Branch :: Branch(string branchName, string ifscCode, long int contactNo){
    this->branchName = branchName;
    this->ifscCode = ifscCode;
    this->contacNo = contacNo;
}
string Branch :: getBranchName(){
    return branchName;
}
string Branch :: getIfscCode(){
    return ifscCode;
}
long int Branch :: getContactNo(){
    return contacNo;
}
void Branch :: setBranchName(string bnm){
    this->branchName = bnm;
}
void Branch :: setIfscCode(string code){
    this->ifscCode = code;
}
void Branch :: setContactNo(long int no){
    this->contacNo =no;
}
void Branch :: display(){
    cout<<"Branch Name: "<<getBranchName()<<endl;
    cout<<"Branch Code: "<<getIfscCode()<<endl;
}

class Account{
        static int account_count;
        int acc_no;
        string acc_name;
        string acc_type;        
        float acc_balance;
       // Branch acc_branch; 
    public:
        Account(); //default constructor
        Account(string accnm,string acctype); //parameterized
     //   ~Account(); //destructor
        void debit(float);
        void credit(float);
        void display(); //to view details of account
        void setAccBalance(int);
        void setAccName(string);
        void setAccType(string);
        void setAccNo(int);
        
        int getAccBalance() const;
        string getAccName() const;
        string getAccType() const;
        int getAccNo() const;
        static void incAccCount();
};
int Account::account_count = 1;

Account::Account(){
    acc_no = 0;
    acc_name = '\0';
    acc_type = '\0';
    acc_balance = 0;
}
Account::Account(string accnm, string acctype){
    acc_no = account_count;
    acc_name = accnm;
    acc_type = acctype;
    if(acc_type == "saving")
        acc_balance = 0;
    else    
        acc_balance = 1000;
    cout<<"Your account has been created!!!"<<endl;
}

void  Account :: setAccBalance(int balance){
    this->acc_balance = balance;
}
void  Account :: setAccName(string name){
    this->acc_name = name;
}
void Account :: setAccType(string type){
    this->acc_type = type;
}
void Account :: setAccNo(int ano){
    this->acc_no = ano;
}
int Account :: getAccBalance() const{
    return this->acc_balance;
}
string Account :: getAccName() const{
    return this->acc_name;
}
string Account :: getAccType() const{
    return this->acc_type;
}
int Account :: getAccNo() const{
    return acc_no;
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
    cout<<"Account Number: "<<acc_no<<endl;
    cout<<"Account Name: "<<acc_name<<endl;
    cout<<"Account Type: "<<acc_type<<endl;    
    cout<<"Account Balance: "<<acc_balance<<endl;
}
void Account :: incAccCount(){
    account_count++;
}

Account createAccount(){
    string name, type;
    cin.ignore();
    cout<<"Enter account name: ";
    getline(cin, name);
    cout<<"Enter account type(saving/current): ";
    cin>>type;
    Account acc(name, type);
    Account::incAccCount();
    return acc;
}
bool accSearch(Account *acclist, int count){
    int acno;
    cout<<"Enter account number for which u want details: "<<endl;
    cin>>acno;
    for(int i = 0; i < count; i++){
        if(acclist[i].getAccNo() == acno){
            acclist[i].display();
            return true;
        }
    }
    return false;
}
void displayAll(Account *acclist, int count){
    for(int i = 0; i < count; i++){
        acclist[i].display();
    }
}
int main(){
    Account accountList[20];
    int choice, count = 0, ano, amt;
    do{
        cout<<"1. Create Account\n2. View Account Details\n3. Withdraw money\n4. Deposit Money\n5. View All Account Details\n6. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>> choice;
        switch(choice){
            case 1:
                    accountList[count] = createAccount();
                    count++;
                    //char acctype, char *accnm, int accno, float accbal
                    break;
            case 2:
                    if(!accSearch(accountList, count)){
                       cout<<"Detail is not available"<<endl;
                    }
                    break;
            case 3:
                    cout<<"Enter account no: ";
                    cin>>ano;
                    cout<<"Enter amount to withdraw: ";
                    cin>>amt;
                    accountList[ano-1].debit(amt);
                    break;
            case 4:
                    cout<<"Enter account no: ";
                    cin>>ano;
                    cout<<"Enter amount to deposit: ";
                    cin>>amt;
                    accountList[ano-1].credit(amt);
                    break;
            case 5:
                    displayAll(accountList, count);
                    break;
            case 6:
                    exit(0);
            default:
                    cout<<"Invalid choice...."<<endl;
        }

    }while(choice);
    return 0;
}