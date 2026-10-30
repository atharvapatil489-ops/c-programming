#include<iostream>
#include<exception>
using namespace std;
class myage:public exception
{
    public:
    const char*what()const throw()
    {
        return"attempted to vote under 18";
    }
};
class student
{
    public:
    int age;
    void setage(int a)
    {
        if (a<18)
        {
            throw myage();
        }
    age=a;
    }
    void display()
    {
        cout<<"student age:"<<age<<endl;
        cout<<"eligible";
    }
};
int main()
{
    student s;
    try
    {
    s.setage(20);
    s.display();
    }
    catch(const myage& e)
    {
      cout<<e.what();
    }
}