//WAP to find maxm of two number & maxm of three number using same function name maximum()
#include<iostream>
using namespace std;
int max(int,int);
int max(int,int,int);
int main()
{
    cout<<"Result is:"<<max(2,5)<<endl;
     cout<<"Result is:"<<max(2,5,9)<<endl;

       return 0;
}
int max(int a,int b)
{
    cout<<"Function compares two integer"<<endl;
    if(a>b)
    {
       cout<<a<<"is max" <<endl;

    }
    else
    {
        cout<<b<<"is the maximum"<<endl;
    }
}
int max(int a,int b,int c)
{
    cout<<"Function compares three integer"<<endl;
    if((a>b)&&(a>c))
    {
       cout<<a<<"is max" <<endl;

    }
    else if((b>a)&&(b>c))
    {
       cout<<b<<"is max" <<endl;

    }
    else
    {
        cout<<c<<"is the maximum"<<endl;
    }
}