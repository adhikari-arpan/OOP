//Diamond problem using constructor

#include <iostream>
#include <string.h>
using namespace std;

class Person
{
    protected: 
    char name[20];
    int code;
    
    public:
    Person(char *a, int b)
    {
        strcpy(name,a);
        code = b;
    }
    void displayP()
    {
        cout<<"Name = "<<name<<endl;
        cout<<"Code = "<<code<<endl;
    }
};

class Account:virtual public Person
{
    protected:
    float salary;
    
    public:
    Account(char *a, int b, float c):Person(a,b)
    {
        salary = c;
    }
    void displayA()
    {
        cout<<"Salary = "<<salary<<endl;
    }
};

class Admin:virtual public Person
{
    protected:
    int yearofexperience;
    
    public:
    Admin(char *a, int b, int d):Person(a,b)
    {
        yearofexperience = d;
    }
    void displayAd()
    {
        cout<<"Year of experience = "<<yearofexperience<<endl;
    }
};

class Record: public Account,public Admin
{
    private:
    int recordno;
    
    public:
    Record(char *a, int b, float c, int d, int e):Person(a,b),Account(a,b,c),Admin(a,b,d)
    {
        recordno = e;
    }
    void displayR()
    {
        cout<<"Record Number = "<<recordno<<endl;
    }
};

int main()
{
    char name[20];
    int code,yoe,recno;
    float salary;
    cout<<"Enter your ddetails"<<endl<<"(Name,Code,Salary,Year of Experience, Record no)"<<endl;
    cin>>name>>code>>salary>>yoe>>recno;
    Record ob(name,code,salary,yoe,recno);
    cout<<"Details of person are"<<endl;
    ob.displayP();
    ob.displayA();
    ob.displayAd();
    ob.displayR();
    return 0;
}