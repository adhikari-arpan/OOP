#include<iostream>
using namespace std;
class Item
{
    private: static int count;
            int number;

    public: void getdata(int a)
    {
        number = a;
        count++;
    }
    void displaycount()
    {
        cout<<"Count :"<<count<<endl;
    }
};
int Item :: count;
int main()
{
    Item x,y,z;
    x.displaycount();
    y.displaycount();
    z.displaycount();
    x.getdata(10);
    y.getdata(20);
    z.getdata(30);
    cout<<"After reading data"<<endl;
    x.displaycount();
    y.displaycount();
    z.displaycount();
    return 0;
}