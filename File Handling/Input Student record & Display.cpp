#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class Student
{
private:
    char name[20];
    char address[20];
    int roll;

public:
    void input()
    {
        cout << "Enter name of student" << endl;
        cin >> name;
        cout << "Enter address of student" << endl;
        cin >> address;
        cout << "Enter roll number of student" << endl;
        cin >> roll;
    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Address : " << address << endl;
        cout << " Roll Number : " << roll << endl;
    }
    char* getAddress()
    {
        return address;
    }
};

int main()
{
    int n;
    Student s[100];
    cout << "Enter number of students" << endl;
    cin >> n;
    fstream FILE;
    FILE.open("Student.txt", ios::out);
    if (!FILE)
    {
        cout << "File opening failed" << endl;
        exit(0);
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Enter details of " << i + 1 << "student" << endl;
        s[i].input();
        FILE.write((char *)&s[i], sizeof(s[i]));
    }
    FILE.close();
    cout << "File opened and closed successfully" << endl;
    FILE.open("Student.txt", ios::in);
    if (!FILE)
    {
        cout << "File opening failed" << endl;
        exit(0);
    }
    for (int i = 0; i < n; i++)
    {
        FILE.read((char *)&s[i], sizeof(s[i]));
        if ((strcmp(s[i].getAddress(),"kathmandu"))==0)
        {
            cout<<"The details of students are"<<endl;
            s[i].display();
        }
    }
    FILE.close();
    return 0;
}