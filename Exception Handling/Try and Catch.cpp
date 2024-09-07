#include <iostream>
using namespace std;

int main()
{
    int a, b, x;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;
    x = a - b;
    try
    {
        if (x != 0)
        {
            cout << "Result (a/x) is " << a / x << endl;
        }
        else
        {
            throw(x);
        }
    }
    catch (int x)
    {
        cout << "Exception caught : Divide by zero" << endl;
    }
    cout << "End of program" << endl;
    return 0;
}