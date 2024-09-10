// Rectangle to polar i.e. Polar = Rectangle

#include <iostream>
#include<math.h>
using namespace std;

class Polar
{
private:
    float radius;
    float angle;

public:
    Polar()
    {
        radius = 0.0;
        angle = 0.0;
    }
    Polar(float r, float a)
    {
        radius = r;
        angle = a;
    }
    void display()
    {
        cout << "( " << radius << " , " << angle << " ) " << endl;
    }
};
class Rectangle
{
private:
    float xco;
    float yco;

public:
    Rectangle()
    {
        xco = 0.0;
        yco = 0.0;
    }
    Rectangle(float x, float y)
    {
        xco = x;
        yco = y;
    }
    void display()
    {
        cout << "( " << xco << " , " << yco << " ) " << endl;
    }
    operator Polar()
    {
        float a = tan(yco / xco);
        float b = sqrt((xco * xco) + (yco * yco));
        return Polar(a, b);
    }
};

int main()
{
    Rectangle r(3, 4);
    Polar p;
    p = r;
    cout << "Polar coordinates are" << endl;
    p.display();
    return 0;
}