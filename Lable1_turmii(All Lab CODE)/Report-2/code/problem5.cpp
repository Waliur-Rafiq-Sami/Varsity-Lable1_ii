#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    BankAccount(string ahn = "Unknown", int anum = 0, double b = 0) : accountHolderName(ahn), accountNumber(anum), balance(b) {}
    void deposit(double amount)
    {
        if (amount < 0)
            cout << "Sorry, Invalid Amount\n"
                 << endl;
        balance += amount;
        cout << amount << "$ add successfully\n\n";
    }
    void withdraw(double amount)
    {
        if (amount < 0)
            cout << "Sorry, Invalid Amount" << endl;
        else if (amount > balance)
            cout << "Sorry, You have not much balance\n"
                 << endl;
        else
        {
            balance -= amount;
            cout << amount << "$ withdraw successfully\n\n";
        }
    }
    void display()
    {
        cout << "---Your Bank Account Details---" << endl;
        cout << "\tAccount name    : " << accountHolderName << endl;
        cout << "\tAccount Number  : " << accountNumber << endl;
        cout << "\tCurrent balance : " << balance << "$" << endl;
        cout << endl;
    }
};

int main()
{
    BankAccount user1("Walur Rafiq SAMI", 112);
    user1.display();

    cout << "After deposit 530$" << endl;
    user1.deposit(530);
    user1.display();

    cout << "After withdraw 354.64$" << endl;
    user1.withdraw(354.64);
    user1.display();

    cout << "After withdraw -20$" << endl;
    user1.withdraw(-20);

    cout << "After withdraw 2000$" << endl;
    user1.withdraw(2000);

    // display
    user1.display();
    return 0;
}