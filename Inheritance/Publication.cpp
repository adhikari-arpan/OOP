#include <iostream>
#include<string>
using namespace std;

class Publication
{
   protected: 
   char title[20];
   float price;
   
   public:
   void getP()
   {
       cout<<"Enter publication name"<<endl;
       cin>>title;
       cout<<"Enter price of book"<<endl;
       cin>>price;
   }
   void displayP()
   {
        cout<<"Publication Name ="<<title<<endl;
        cout<<"Price of book ="<<price<<endl;
   }
};

class Sales
{
   protected: 
   int total;
   
   public:
   void getS()
   {
       cout<<"Enter total number of sales"<<endl;
       cin>>total;
   }
   void displayS()
   {
        cout<<"Total number of sales ="<<total<<endl;
   }
};

class Book : public Publication, public Sales
{
   private: 
   string bookname,authorname;
   
   public:
   void getB()
   {   
       cout<<"Enter name of book"<<endl;
       cin.ignore();
       getline(cin,bookname);
       cout<<"Enter author of book"<<endl;
       getline(cin,authorname);
   }
   void displayB()
   {
        cout<<"Name of book ="<<bookname<<endl;
        cout<<"Author of book ="<<authorname<<endl;
   }
};

int main() 
{
    Book ob;
    cout<<"Enter the details of book"<<endl;
    ob.getP();
    ob.getS();
    ob.getB();
    cout<<"the details of book are"<<endl;
    ob.displayP();
    ob.displayS();
    ob.displayB();
    return 0;
}