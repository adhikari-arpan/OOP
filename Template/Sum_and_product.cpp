// WAP to find sum and product of two integer and float using class template.

#include <iostream>
using namespace std;

template <class T>
class Sample
{
private:
    T a, b, s, p;

public:
    void setData(T x, T y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        s = a + b;
        p = a * b;
        cout << "The sum is " << s << endl;
        cout << "The product is " << p << endl;
    }
};

int main()
{
    Sample<int> ob1;
    Sample<float> ob2;
    ob1.setData(3, 4);
    ob2.setData(4.5, 5.5);
    cout << "For integer" << endl;
    ob1.display();
    cout << "For floating point data" << endl;
    ob2.display();
    return 0;
}