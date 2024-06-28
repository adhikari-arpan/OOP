//WAP to calculate simple interest from given principle, time and rate. Set the rate as 15% when rate is not provided.

#include<iostream>
using namespace std;
float calculate(float principle, float time, float rate=15)
{
    return((principle*time*rate)/100.0);
}

    int main()
    {
        float p,r,t;
        char ch;
        cout<<"Enter principle and time"<<endl;
        cin>>p>>t;
        cout<<"Do you want to enter rate"<<endl;
        cin>>ch;
        if(ch=='Y'||ch=='y')
        {
            cout<<"Enter rate"<<endl;
            cin>>r;
            cout<<"Simple Interest ="<<calculate(p,t,r)<<endl;
        }
        else
        {
            cout<<"Simple interest ="<<calculate(p,t)<<endl;
        }
        return 0;
    }