// Create a class template to find the scalar product of vector of integers and vecor of float numbers.

#include <iostream>
using namespace std;

template <class T>
class Vector
{
private:
    T a, b, c;

public:
    Vector(T x, T y, T z)
    {
        a = x;
        b = y;
        c = z;
    }
    T operator*(Vector p)
    {
        T sum;
        a = a * p.a;
        b = b * p.a;
        c = c * p.c;
        sum = a + b + c;
        return sum;
    }
    void display()
    {
        cout << a << "i+" << b << "j+" << c << "k" << endl;
    }
};

int main()
{
    Vector<int> v1(2, 3, 4), v2(5, 6, 7);
    Vector<float> m(2.2, 2.3, 2.4), n(3.4, 5.6, 3.4);
    cout << "For integer data" << endl;
    cout << "V1 = ";
    v1.display();
    cout << "V2 = ";
    v2.display();
    cout << "Scalar product is " << v1 * v2 << endl;
    cout << "For Float data" << endl;
    cout << "m = ";
    m.display();
    cout << "n = ";
    n.display();
    cout << "Scalar product is " << m * n << endl;
    return 0;
}