#include<iostream>
using namespace std;
int add(int a,int b)
{
    cout<<"Function adds two integer"<<endl;
    return(a+b);

}
int add(int a,int b, int c)
{
    cout<<"Function adds three iinteger"<<endl;
    return(a+b+c);

}
double add(double a,double b)
{
    cout<<"Function adds two double value"<<endl;
    return(a+b);
}
double add(int a,double b)
{
    cout<<"Function adds int and double value"<<endl;
    return (a+b);
}
int main()
{
    cout<<"Result is:"<<add(2,5)<<endl;
     cout<<"Result is:"<<add(2,5,5)<<endl;
      cout<<"Result is:"<<add(20.5,30.8)<<endl;
       cout<<"Result is:"<<add(2,70.5)<<endl;
       return 0;
}