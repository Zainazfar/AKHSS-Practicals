#include <iostream>
using namespace std;

int main()
{
  int no, i = 1, sum = 0;

    cout << "Enter a number: ";
    cin >> no;

    while (i <= no)
    {
        sum += i;  
        i++;       
    }

    cout << "Sum of first " << no << " numbers is: " << sum << endl;

    return 0;
}
