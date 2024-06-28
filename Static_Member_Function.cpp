#include<iostream>
using namespace std;
class Test
{
    private: int code;
            static int count;

    public:
        void setCode()
        {
            code = ++count;
        }
        void showCode()
        {
            cout<<"Code ="<<code<<endl;
        }
        static void showCount()
        {
            cout<<"count ="<<count<<endl;
        }
};
int Test::count;
int main()
{
    Test t1,t2;
    t1.setCode();
    t2.setCode();
    Test::showCount();
    Test t3;
    Test::showCount();
    t1.showCode();
    t2.showCode();
    t3.showCode();
    return 0;
    
}