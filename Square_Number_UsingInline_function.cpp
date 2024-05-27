//WAP to calculate square of number using inline function.
#include<iostream>
using namespace std;
inline int square(int num)
{
    return num*num;
}
int main()
{
    int num,sq;
    cout<<"Enter the number to find the square"<<endl;
    cin>>num;
    sq = square(num);
    cout<<"The square of number is "<<sq<<endl;
    return 0;
}