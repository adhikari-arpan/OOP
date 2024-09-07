#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream FILE;
    FILE.open("myFile.txt", ios::out);
    if (!FILE)
    {
        cout << "File opening failed" << endl;
        exit(0);
    }
    cout << "(Hello World!!) is being written in file" << endl;
    FILE << "Hello World!" << endl;
    FILE.close();
    return 0;
}