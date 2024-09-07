#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream FILE;
    FILE.open("myFile.txt", ios::in);
    if (!FILE)
    {
        cout << "File opening failed" << endl;
        exit(0);
    }
    char ch;
    cout << "Reading from file" << endl;
    while (!FILE.eof())
    {
        FILE >> ch;
        cout << ch;
    }
    FILE.close();
    return 0;
}