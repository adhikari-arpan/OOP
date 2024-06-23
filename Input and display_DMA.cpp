//WAP to input n elements in an array and display using DMA.

#include<iostream>
using namespace std;

int main()
{
    int i,size;
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
        cout<<ptr[i]<<endl;
    }
    delete[] ptr;
    return 0;
}