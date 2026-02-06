#include <iostream>
using namespace std;

int main()
{   int choice;
    float num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Result = " << num1 + num2 << endl;
            break;

        case 2:
            cout << "Result = " << num1 - num2 << endl;
            break;

        case 3:
            cout << "Result = " << num1 * num2 << endl;
            break;

        case 4:
            if (num2 != 0)
                cout << "Result = " << num1 / num2 << endl;
            else
                cout << "Division by zero not allowed" << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
    }
    return 0;
}