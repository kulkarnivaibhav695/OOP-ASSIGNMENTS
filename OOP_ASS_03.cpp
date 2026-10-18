/*
NAME :- VAIBHAV KULKARNI
PRN  :- 1262253985
*/

#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount() {
        accountNumber = 0;
        balance = 0.0;
        cout << "Default constructor called" << endl;
    }

    BankAccount(int accNo, double initialBalance) {
        accountNumber = accNo;
        balance = initialBalance;
        cout << "Parameterized constructor called" << endl;
    }

    BankAccount(const BankAccount &obj) {
        accountNumber = obj.accountNumber;
        balance = obj.balance;
        cout << "Copy constructor called" << endl;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully" << endl;
        } else {
            cout << "Invalid deposit amount" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount" << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance" << endl;
        } else {
            balance -= amount;
            cout << "Amount withdrawn successfully" << endl;
        }
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    ~BankAccount() {
        cout << "Destructor called for account " << accountNumber << endl;
    }
};

int main() {
    BankAccount account1;
    account1.display();

    BankAccount account2(101, 5000.0);
    account2.deposit(1500.0);
    account2.withdraw(1000.0);
    account2.display();

    BankAccount account3(account2);
    account3.display();

    return 0;
}
