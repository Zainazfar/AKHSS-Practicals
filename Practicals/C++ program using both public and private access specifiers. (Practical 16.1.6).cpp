#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    float balance;

public:
    void input()
    {
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Enter balance: ";
        cin >> balance;
    }

    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount acc;   
    acc.input();       
    acc.display();     

    return 0;
}
