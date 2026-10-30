#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
    ofstream file1;
    string data;
    // Open file and write data
    file1.open("stud.txt",ios::app);
    file1<<"Hello, Welcome to C++ File Handling!\n my college is good.\n nature is good freind.\n i love mango. ";
    cout<<"file created succesfully";
    file1.close();
    ifstream file2;
    file2.open("stud.txt");

    while (getline(file2, data))
    {
        cout << data << endl;
    }
    file2.close();

    return 0;
}