#include<iostream>
using namespace std;
 int main(){
 int num ,orignalNum,remainder,result =0;
 cout<< "enter a three digit number:";
 cin>> num;
 orignalNum = num;
 while (orignalNum !=0){
 remainder =orignalNum % 10;
 result += remainder +remainder + remainder;
 orignalNum /= 10;
 }
 if (result == num)
     cout<<num<< "is an armstrong number";
  else
      cout<< num << "is not an armstrong number";
return 0;
}
