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
    Sample operator ++(int)
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
    s1 = s++;
    s1.display();
    s.display();
    return 0;
}
