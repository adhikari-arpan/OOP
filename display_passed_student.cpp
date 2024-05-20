#include<iostream>
using namespace std;

class Student
{
    private:
    char name[20];
    int roll;
    char address[20];

    public:
        float percentage;
    void input();
    void display();
};
void Student::input()
{
    cout<<"Enter details of student"<<endl;
    cin>>name>>roll>>address;
    cin>>percentage;
}
void Student::display()
{
    if(percentage>45)
        {
    cout<<"The details of student are"<<endl;
    cout<<"Name="<<name<<endl<<"Roll="<<roll<<endl<<"Address="<<address<<"Percentage="<<percentage<<endl;
}}
int main()
{
    Student s[5];
    int i,n;
    cout<<"Enter the number of students"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter data of "<<i+1<<" student"<<endl;
        s[i].input();
    }
    for(i=0;i<n;i++)
    {
            cout<<"The details of passed student is"<<endl;
            s[i].display();
    }
    return 0;
}