#include <iostream>
using namespace std;

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main()
{
    int no_1, no_2, choice;

    cout << "Enter two numbers: ";
    cin >> no_1 >> no_2;
    
    cout << "Choose an operation: " << endl;
    cout << "1: Addition" << endl;
    cout << "2: Subtraction" << endl;
    cout << "3: Multiplication" << endl;
    cout << "4: Division" << endl;
    cin >> choice;
    
    if (choice == 1){
        cout << "Addition = " << add(no_1, no_2) << endl;
    }
 
    else if (choice == 2){
        cout << "Subtraction = " << subtract(no_1, no_2) << endl;
    }
    
    else if (choice == 3){
         cout << "Multiplication = " << multiply(no_1, no_2) << endl;
    }
 
    else if(choice == 4){
        if (no_2 != 0)
        cout << "Division = " << divide(no_1, no_2) << endl;
        else
        cout << "Division not possible (division by zero)" << endl;
    }
    
    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    return (float)a / b;
}
