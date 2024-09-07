// Addition of two number of type int and float using class template and swapping of two number using function template

#include <iostream>
using namespace std;

template <class T1, class T2>
class Sample
{
private:
    T1 x;
    T2 y, sum;

public:
    Sample(T1 a, T2 b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        sum = x + y;
        cout << "The sum is " << sum << endl;
    }
};

template <typename T>
void swapp(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    cout << "Addition of two number of integer and float by class template:" << endl;
    Sample<int, float> s(3, 4.5);
    s.display();
    cout<<endl;
    cout<<"Swapping of two number by function template:" << endl;
    int i1 = 4, i2 = 3;
    swapp(i1, i2);
    cout<<"The data after swapping int data is i1 = "<< i1<< "   i2 = "<< i2<< endl;
    float f1 = 5, f2 =9;
    swapp(f1,f2);
    cout<<"The data after swapping float data is f1 = "<< f1 << "   f2 = "<< f2<< endl;
    return 0;
}