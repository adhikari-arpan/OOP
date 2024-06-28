#include<iostream>
#include<string.h>
using namespace std;
class Person
{
private:
    char  name[20];
    char address[20];
    int age;
    long int citzno;

public:
    Person(char*n,int a,char*addr,long int c)
    {
        strcpy(name,n);
        age=a;
        strcpy(address,addr);
        citzno=c;

    }

    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Address:"<<address<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Citizenship number:"<<citzno<<endl;
    }
};

int main()
{
    char name[20],address[20];
    int age;
    long int citzno;
    cout<<"enter the name"<<endl;
    cin>>name;
    cout<<"Enter the address"<<endl;
    cin>>address;
    cout<<"enter the age"<<endl;
    cin>>age;

    if(age>16)
    {
        cout<<"enter the citizenship number"<<endl;
        cin>>citzno;
        Person p(name,age,address,citzno);
        p.display();
    }
    else
    {
        Person p(name,age,address,0);
        p.display();
    }
    return 0;
    }
