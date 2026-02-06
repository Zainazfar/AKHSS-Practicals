#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter number of values: ";
    cin >> number;

    int array[number];
    int sum = 0;

    cout << "Enter the values: " << endl;
    for (int i = 0; i < number; i++)
    {
        cin >> array[i];
        sum += array[i];
    }

    int highest = array[0];
    int lowest = array[0];

    for (int i = 1; i < number; i++)
    {
        if (array[i] > highest)
            highest = array[i];

        if (array[i] < lowest)
            lowest = array[i];
    }

    float average = (float)sum / number;

    cout << "Highest value: " << highest << endl;
    cout << "Lowest value: " << lowest << endl;
    cout << "Average value: " << average << endl;

    return 0;
}
