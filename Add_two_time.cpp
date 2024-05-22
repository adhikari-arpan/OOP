#include<iostream>
using namespace std;
class Time
{
    private:
    int hr,minute,sec;

    public:
    void input();
    Time calculate(Time,Time);
    void display();
};
void Time::input()
{
    cout<<"Enter time in hour"<<endl;
    cin>>hr;
    cout<<"Enter time in minute"<<endl;
    cin>>minute;
    cout<<"Enter time in second"<<endl;
    cin>>sec;
}
Time Time::calculate(Time ob1,Time ob2)
{
    Time temp;
    temp.sec=ob1.sec+ob2.sec;
    temp.minute=temp.sec/60;
    temp.sec=temp.sec%60;
    temp.minute=temp.minute+ob1.minute+ob2.minute;
    temp.hr=temp.minute/60;
    temp.minute=temp.minute%60;
    temp.hr=temp.hr+ob1.hr+ob2.hr;
    return temp;
}
void Time::display()
{
    cout<<hr<<":"<<minute<<":"<<sec<<endl;
}
int main()
{
    Time ob1,ob2,ob3;
    cout<<"Enter first data"<<endl;
    ob1.input();
    cout<<"Enter second data"<<endl;
    ob2.input();
    ob3=ob3.calculate(ob1,ob2);
    cout<<"After addition the time is"<<endl;
    ob3.display();
    return 0;
}