#include<iostream>
using namespace std;
class Complex
{
    private: int real;
    int img;

    public: 
    void input();
    void display();
    void addComplex(Complex,Complex);
};
void Complex::input()
{
    cout<<"Enter real part of number"<<endl;
    cin>>real;
    cout<<"Enter complex part of number"<<endl;
    cin>>img;
}
void Complex::display()
{
    cout<<real<<"+"<<img<<"i"<<endl;
}
void Complex::addComplex(Complex ob1,Complex ob2)
{
    real=ob1.real+ob2.real;
    img=ob1.img+ob2.img;
}
int main()
{
    Complex ob1,ob2,ob3;
    cout<<"Enter first number"<<endl;
    ob1.input();
    cout<<"Enter second number"<<endl;
    ob2.input();
    cout<<"The entered value first number is"<<endl;
    ob1.display();
    cout<<"The entered value second number is"<<endl;
    ob2.display();
    ob3.addComplex(ob1,ob2);
    cout<<"The number after addition is"<<endl;
    ob3.display();
    return 0;
}