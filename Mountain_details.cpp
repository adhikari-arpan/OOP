//Create a class called mountain with the data member name,location,height. Create a function comparing height of two mountain. Display the information of mountain with greatest height.
#include<iostream>
using namespace std;
class Mount
{
    private:
    char name[20],location[20];
    float height;

    public:
    void input();
    void compare(Mount,Mount);
    void display();
};
void Mount::input()
{
    cout<<"Enter name of mountain"<<endl;
    cin>>name;
    cout<<"Enter location of mountain"<<endl;
    cin>>location;
    cout<<"Enter height of mountain"<<endl;
    cin>>height;
}
void Mount::compare(Mount m1,Mount m2)
{
    if(m1.height>m2.height)
    {
        m1.display();
    }
    else
    {
        m2.display();
    }
}
void Mount::display()
{
    cout<<"The details of mountain with greatest height is"<<endl;
    cout<<"Name ="<<name<<endl<<"Location ="<<location<<endl<<"Height ="<<height<<endl;
}
int main()
{
    Mount m1,m2,m3;
    cout<<"Enter data of first mountain"<<endl;
    m1.input();
    cout<<"Enter data of second mountain"<<endl;
    m2.input();
    m3.compare(m1,m2);
    return 0;
}