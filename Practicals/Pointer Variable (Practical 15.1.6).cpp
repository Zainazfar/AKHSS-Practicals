#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int *ptr;
    ptr = &num;

    cout << "Value of num: " << num << endl;
    cout << "Value using pointer: " << *ptr << endl;

    cout << "Enter a new value of num:  " << endl;
    cin >> *ptr;
    cout << "New value of num: " << num << endl;
    cout << "Value using pointer: " << *ptr << endl;
    cout << "Address stored using pointer: " << ptr << endl;

    return 0;
}
