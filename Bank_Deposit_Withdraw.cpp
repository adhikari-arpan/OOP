//Write a cpp program to create class called bank that has private member variables for account number and balance. Include member function to deposit and withdraw money in function.
#include<iostream>
using namespace std;
class Bank
{
    private:
    long long int ac_no;
    long int balance;

    public:
    void input();
    void deposit(Bank);
    void withdraw(Bank);
};
void Bank::input()
{
    cout<<"Enter account number"<<endl;
    cin>>ac_no;
    cout<<"Enter balance"<<endl;
    cin>>balance;
}
void Bank::deposit(Bank c1)
{
    float amount;
    cout<<"Enter the amount to be deposited"<<endl;
    cin>>amount;
    c1.balance=c1.balance+amount;
    cout<<"The amount on your account is"<<c1.balance<<endl;
}
void Bank::withdraw(Bank c1)
{
    float amount;
    cout<<"Enter the amount to be withdrawn"<<endl;
    cin>>amount;
    c1.balance=c1.balance-amount;
    cout<<"The amount on your account is"<<c1.balance<<endl;
}
int main()
{
    Bank c1;
    int n;
    c1.input();
    cout<<"Press 1 for withdraw and 2 for deposit"<<endl;
    cin>>n;
    if(n=1)
    {
        c1.withdraw(c1);
    }
    else if(n=2)
    {
        c1.deposit(c1);
    }
    else
    {
        cout<<"You entered wrong choice"<<endl;
    }
    return 0;
}