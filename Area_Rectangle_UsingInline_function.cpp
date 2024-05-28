//WAP to calculate area of rectangle using inline function.
#include<iostream>
using namespace std;
inline int area(int l,int b)
{
    return(l*b);
}
int main()
{
    int len,bre,Area;
    cout<<"Enter length and breadth"<<endl;
    cin>>len>>bre;
    Area=area(len,bre);
    cout<<"Area ="<<Area<<endl;
    return 0;
}