#include <iostream>
using namespace std;

float average(int sum, int count);
int main()
{
    int no, num, sum = 0;

    cout << "Enter how many numbers: ";
    cin >> no;

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter number " << i << ": ";
        cin >> num;
        sum += num;
    }

    cout << "Average = " << average(sum, no) << endl;

    return 0;
}

float average(int sum, int count)
{
    return (float)sum / count;
}