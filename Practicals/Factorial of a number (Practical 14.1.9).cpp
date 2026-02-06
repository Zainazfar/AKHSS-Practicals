#include <iostream>
using namespace std;

long long factorial(int n);

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Factorial of " << number << " is: " << factorial(number) << endl;
    
    return 0;
}

long long factorial(int num)
{
    long long factorial = 1;
     for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
     return factorial;
}
