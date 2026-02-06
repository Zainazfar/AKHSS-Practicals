#include <iostream>
using namespace std;

int main() 
{
    int atdnce, marks;
    
      cout << "What is your attendence?" << endl; 
      cin >> atdnce;
      
    if (atdnce >= 75)
    {
        cout << "Enter marks: ";
        cin >> marks;

        if (marks >= 85)
        {
            cout << "Grade: A" << endl;
        }
        else if (marks >= 70)
        {
            cout << "Grade: B" << endl;
        }
        else if (marks >= 50)
        {
            cout << "Grade: C" << endl;
        }
        else
        {
            cout << "Fail" << endl;
        }
    }
    else
    {
        cout << "Not eligible due to low attendance" << endl;
    }

    return 0;
}