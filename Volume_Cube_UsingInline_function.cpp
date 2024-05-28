//WAP to calculate volume of cube using inline function.
#include<iostream>
using namespace std;
inline int volume(int l)
{
    return l*l*l;
}
int main()
{
    int vol,len;
    cout<<"Enter the length of cube"<<endl;
    cin>>len;
    vol = volume(len);
    cout<<"The volume of cube is "<<vol<<endl;
    return 0;
}