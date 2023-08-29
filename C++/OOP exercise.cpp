//constructor function must initiliaze the accountbalance above zero wtih int else eror message
//member functions  credit debit getbalance
// credit add an amount to the current balance
// debit withdraw money from account when the amount exceeds the amount of credit print Debit amount exceeded account balance
// getbalance return current balance
#include<iostream>
#include<string>
using namespace std;
class Account{
public:
    Account(int);
    int accountbalance;
    int credit(int);
    void debit(int);
    int getbalance();
};
Account::Account(int){
    cout<<"Enter a initial credit amount: ";
    cin>>accountbalance;
    if(accountbalance<=0){
        cout<<"ERORR  negative credit ammount has been entered,acoount balance set to zero...."<<endl;
        accountbalance=0;
    }
}
int Account::credit(int){
    cout<<"Enter a ammount to add the account balance"<<endl;
    int temp;
    cin>>temp;
    accountbalance=accountbalance+temp;
    return accountbalance;
}
void Account::debit(int){
    cout<<"Enter a amount to withdraw the money: "<<endl;
    int reverse_temp;
    cin>>reverse_temp;
    int backtemp;
    backtemp=accountbalance;
    accountbalance=accountbalance-reverse_temp;
    if(accountbalance<0){
            cout<<"Debit amount exceeded account balance"<<endl;
            accountbalance=backtemp;
            cout<<"Current balance: "<<accountbalance<<endl;
    }
    else
        cout<<"Current balance: "<<accountbalance<<endl;
}
int Account::getbalance(){
    return accountbalance;
}
int main(int argc, char const *argv[])
{
    int x,y;
    cout<<" *First account*"<<endl;
    Account a1(x);
    a1.credit(x);
    a1.debit(x);
    a1.getbalance();
    //-------------
    cout<<"Second Account"<<endl;
    Account a2(y);
    a2.credit(y);
    a2.debit(y);
    a2.getbalance();
    //------------
    return 0;
}