#include<iostream>
using namespace std;
class SavingAccount {
private:
string accountHolderName;
int accountNumber;
double balance;
double interestRate;

public:
SavingAccount(string name , int accNumber,double initialBalance, double rate) {
accountHolderName = name;
accountNumber = accNumber;
balance = initialBalance;
interestRate = rate;
}
void deposite(double amount) {
if (amount>0) {
balance += amount;
cout<<"Deposited: Rupees"<<amount<<endl;
}
}
void withdraw(double amount) {
if(amount>0 && amount<= balance) {
balance = -amount;
cout<<"Interest Applied: Rupees"<<interestRate<<endl;
}else {
cout<<"Insufficient Balance!"<< endl;
}
}
void applyInterest() {
double interest = balance * interestRate / 100;
balance += interest;
cout << "Interest Applied: Rupees"<<interest<<endl;
}
void display() {
cout <<"\n[Saving Account]"<<endl;
cout<<"Account Holder"<<accountHolderName<<endl;
cout<<"Account Number"<<accountNumber<<endl;
cout<<"Balance; Rupees"<<balance<<endl;
cout<<"Interest Rate"<<"%"<<endl;
}
};


class CheckingAccount {
private:
string accountHolderName;
int accountNumber;
double balance;
double transactionFee;
public:
CheckingAccount(string name, int accNumber, double initialBalance, double fee) {
accountHolderName = name;
accountNumber = accNumber;
balance = initialBalance;
transactionFee = fee;
}
void deposite(double amount) {
if (amount > 0) {
balance += amount;
cout << "Deposited: ₹" << amount << endl;
}
}
void withdraw(double amount) {
double total = amount + transactionFee;
if (total <= balance) {
balance -= total;
cout << "Withdrawn: ₹" << amount << " (₹" << transactionFee << " fee applied)" <<
endl;
} else {
cout << "Insufficient balance for withdrawal + fee!" << endl;
}
}
void display() {
cout << "\n[Checking Account]" << endl;
cout << "Account Holder: " << accountHolderName << endl;
cout << "Account Number: " << accountNumber << endl;
cout << "Balance: ₹" << balance << endl;
cout << "Transaction Fee: ₹" << transactionFee << endl;
}
};

int main() {
SavingAccount savings("Alice", 1001, 5000.0, 3.0);
CheckingAccount checking("Bob", 1002, 3000.0, 20.0);

savings.display();
savings.deposite(1000);
savings.withdraw(2000);
savings.applyInterest();
savings.display();

checking.display();
checking.deposite(1500);
checking.withdraw(1000);
checking.display();
return 0;
}
