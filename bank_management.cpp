//PROGRAM for bank management system
#include <iostream>
#include <string>
using namespace std;
class bank{
    private:
        string name;
        int account_no;
        string account_type;
        float balance;
    public:
        void open_account();
        void deposit_money();
        void withdraw_money();
        void display_account();
};
void bank::open_account(){
    cout<<"Enter your full name:";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter your account number:";
    cin>>account_no;
    cout<<"Enter your account type:";
    cin.ignore();
    getline(cin,account_type);
    cout<<"Enter your initial amount:";
    cin>>balance;
    cout<<"Your account is created";
}
void bank::deposit_money(){
    int a;
    cout<<"Enter how much money you want to deposit:";
    cin>>a;
    balance+=a;
    cout<<"Total amount is:"<<balance;
}
void bank::withdraw_money(){
    int a;
    cout<<"Enter how much money you want to withdraw:";
    cin>>a;
    if(balance-a<500){
        cout<<"Insufficient balance";
    }
    else{
        balance-=a;
        cout<<"Total amount is:"<<balance;
    }
}
void bank::display_account(){
    cout<<"Your full name is:"<<name;
    cout<<"Your account number is:"<<account_no;
    cout<<"Your account type is:"<<account_type;
    cout<<"Your total amount is:"<<balance;
}
int main(){
    int ch;
    bank obj;
    do{
        cout<<"1)Open account
        
";
        cout<<"2)Deposit money 

";
        cout<<"3)Withdraw money

";
        cout<<"4)Display account

";
        cout<<"5)Exit

";

        cout<<"Enter your choice:";
        cin>>ch;
        switch(ch){
            case 1:
                obj.open_account();
                break;
            case 2:
                obj.deposit_money();
                break;
            case 3:
                obj.withdraw_money();
                break;
            case 4:
                obj.display_account();
                break;
            case 5:
                break;
            default:
                cout<<"Invalid choice";
        }
    }while(ch!=5);
    return 0;
}
