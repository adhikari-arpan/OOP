//WAP to find sum of n numbers entered by user using dynamic memory allocation.

#include<iostream>
using namespace std;

int main()
{
    int i,size,sum=0;
    int *ptr;
    cout<<"Enter how many numbers"<<endl;
    cin>>size;
    ptr = new int[size];
    cout<<"Enter"<<size<<"Array Elements"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>ptr[i];
    }
    cout<<"The array elements are"<<endl;
    for(i=0;i<size;i++)
    {
        sum = sum + ptr[i];
    }
    cout<<"Sum = "<<sum<<endl;
    delete[] ptr;
    return 0;
}