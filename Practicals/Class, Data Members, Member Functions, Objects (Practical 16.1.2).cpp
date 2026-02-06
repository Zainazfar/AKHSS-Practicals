#include <iostream>
using namespace std;

class Student
{
private:
    int roll_No;
    float marks;

public:
    void input()
    {
        cout << "Enter roll number: ";
        cin >> roll_No;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "Roll Number: " << roll_No << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student std_1; 
    std_1.input();   
    std_1.display();

    return 0;
}
