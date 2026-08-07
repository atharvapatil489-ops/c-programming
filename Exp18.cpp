#include<iostream>
using namespace std;
 int main(){
 int num,revNum=0;
 cout<<"enter number"<<endl;
 cin>>num;
 int n=num;
while(num>0){
int dig=num%10;
num/=10;
revNum=(revNum*10)+dig;
}
if(revNum==n){
cout<<"num is palindrome"<<endl;
}else{
cout<<"num is not palindrome"<<endl;
}
 
 }
