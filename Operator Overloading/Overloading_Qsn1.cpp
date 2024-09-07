// Unary Operator Overloading

// WAP to overload post fix increment operator returning value through object.

#include <iostream>
using namespace std;

class Sample
{
private:
    int count;

public:
    void getdata(int x)
    {
        count = x;
    }
    void display()
    {
        cout << " Count = " << count << endl;
    }
    Sample operator ++()
    {
        Sample temp;
        temp.count = count++;
        return temp;
    }
};

int main()
{
    int count;
    cout << " Enter the value of count " << endl;
    cin >> count;
    Sample s, s1;
    s.getdata(count);
    s.display();
    cout << "Using ++ operator" << endl;
    s1 = s++;
    s1.display();
    return 0;
}