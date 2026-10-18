/*
NAME :- VAIBHAV KULKARNI
PRN  :- 1262253985
*/

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
    int accountNumber;

protected:
    void displayBalance() {
        cout << "Balance: " << balance << endl;
    }

public:
    BankAccount(int accNo, double initialBalance) {
        accountNumber = accNo;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully." << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount." << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance." << endl;
        } else {
            balance -= amount;
            cout << "Amount withdrawn successfully." << endl;
        }
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        displayBalance();
    }
};

int main() {
    int accNo, choice;
    double initialBalance, amount;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    if (initialBalance < 0) {
        cout << "Invalid initial balance." << endl;
        return 0;
    }

    BankAccount account(accNo, initialBalance);

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Display Account Details\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;

            case 3:
                account.display();
                break;

            case 4:
                cout << "Thank you!" << endl;
                break;

            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 4);

    return 0;
}
