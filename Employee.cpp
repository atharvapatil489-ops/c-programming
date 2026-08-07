#include<iostream>
using namespace std;

class Employee
{
public:
      int empID;
      string name;
      float salary;
      void accept()
      {
      cout<<"Enter Employee ID:";
      cin>> empID;
      cout<<"Enter Name:";
      cin>> name;
      cout<<"Enter salary:";
      cin>> salary;
      }
void display()
{
 cout<<"\n Employee ID:"<< empID;
 cout<<"\n Name:"<<name;
 cout<<"\n Salary:"<<salary;
 }
};
int main()
{
Employee e;
e.accept();
e.display();
return 0;
}
  


