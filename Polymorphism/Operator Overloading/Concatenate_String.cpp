#include<iostream>
#include<string.h>
using namespace std;

class Stringc
{
    private:
    char str[100];

    public:
    Stringc()
    {

    }
    Stringc(char *s)
    {
        strcpy(str,s);
    }
    void display()
    {
        cout<<"String is :"<<str<<endl;
    }
    Stringc operator +(Stringc S2)
    {
        Stringc S3;
        strcat(str,S2.str);
        strcpy(S3.str,str);
        return S3;
    }
};

int main()
{
    Stringc S1("Arpan");
    Stringc S2("Adhikari");
    Stringc S3;
    S1.display();
    S3 = S1 + S2;
    S2.display();
    S3.display();
    return 0;
}