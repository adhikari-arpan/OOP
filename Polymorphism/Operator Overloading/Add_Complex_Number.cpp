#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    Complex operator+(Complex C2)
    {
        Complex temp;
        temp.real = real + C2.real;
        temp.img = img + C2.img;
        return temp;
    }
    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
};
int main()
{
    Complex C1(3,5);
    Complex C2(2, 3);
    Complex C3;
    C3 = C1 + C2;
    C3.display();
    return 0;
}