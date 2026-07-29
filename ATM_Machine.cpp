#include <bits/stdc++.h>
using namespace std;

class ATM
{
private:
    double balance;

public:
    ATM()
    {
        balance = 1000;
    }

    void checkBalance()
    {
        cout << "Balance: " << balance << endl;
    }

    void deposit()
    {
        double amount;
        cin >> amount;
        balance += amount;
    }

    void withdraw()
    {
        double amount;
        cin >> amount;

        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance" << endl;
    }
};

int main()
{
    int pin;
    const int correctPin = 1234;

    cin >> pin;

    if (pin != correctPin)
    {
        cout << "Wrong PIN";
        return 0;
    }

    ATM account;
    int choice;

    do
    {
        cout << "\n1. Balance\n2. Deposit\n3. Withdraw\n4. Exit\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            account.checkBalance();
            break;

        case 2:
            cout << "Amount: ";
            account.deposit();
            break;

        case 3:
            cout << "Amount: ";
            account.withdraw();
            break;

        case 4:
            break;

        default:
            cout << "Invalid choice" << endl;
        }

    } while (choice != 4);

    return 0;
}