#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    int A[4][4], B[4][4], C[4][4];
    int choice;

    cout << "Enter number of rows (max 4): ";
    cin >> rows;
    cout << "Enter number of columns (max 4): ";
    cin >> columns;

    cout << "Enter elements of first matrix: " << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            cin >> A[i][j];

    cout << "Enter elements of second matrix: " << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            cin >> B[i][j];

    cout << "Choose operation: " << endl; 
    cout << "1. Addition " << endl;
    cout << "2. Subtraction " << endl;
    cout << "3. Multiplication "<<  endl;
    cin >> choice;

    if (choice == 1)
    {
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < columns; j++)
                C[i][j] = A[i][j] + B[i][j];
    }
    else if (choice == 2)
    {
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < columns; j++)
                C[i][j] = A[i][j] - B[i][j];
    }
    else if (choice == 3)
    {
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < columns; j++)
            {
                C[i][j] = 0;
                for (int k = 0; k < columns; k++)
                    C[i][j] += A[i][k] * B[k][j];
            }
    }
    else
    {
        cout << "Invalid choice";
        return 0;
    }

    cout << "Resultant matrix: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

return 0;
}
