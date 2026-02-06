#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char string_1[50], string_2[50], string_3[100];

    cout << "Enter first string: ";
    cin >> string_1;

    cout << "Enter second string: ";
    cin >> string_2;
    
    strcpy(string_3, string_1);
    cout << "After strcpy, string_3 = " << string_3 << endl;
    
    strcat(string_3, string_2);
    cout << "After strcat, string_3 = " << string_3 << endl;
    
    cout << "Length of first string = " << strlen(string_1) << endl;
    cout << "Length of second string = " << strlen(string_2) << endl;
    
    if (strcmp(string_1, string_2) == 0)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;

    return 0;
}
