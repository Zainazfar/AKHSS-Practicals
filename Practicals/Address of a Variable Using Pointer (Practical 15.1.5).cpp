#include <iostream>
using namespace std;

int main()
{
    int num;
    cout <<"Enter a number to store: " << endl;
    cin >> num;
    
    int *ptr;
    ptr = &num;

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value stored in ptr (address): " << ptr << endl;

    return 0;
}
