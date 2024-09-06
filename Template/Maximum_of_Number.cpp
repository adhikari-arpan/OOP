// WAP to find the maximum of two number using class template.

#include <iostream>
using namespace std;

template <class T>
class Sample
{
private:
    T a,b;

public:
    void getData(T x, T y)
    {
        a=x;
        b=y;
    }
    T max()
    {
        return (a > b) ? a : b;
    }
};

int main()
{
    Sample<int> ob1;
    Sample<float> ob2;
    ob1.getData(3, 4);
    ob2.getData(3.5, 4.5);
    cout << "Maximum of integer value between 3 and 4 is " << ob1.max() << endl;
    cout << "Maximum of float value between 3.5 and 4.5 is " << ob2.max() << endl;
    return 0;
}
