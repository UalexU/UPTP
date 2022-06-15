#include <iostream>
using namespace std;

int main()
{
    int a[100][100], b[100][100], sum[100][100];
    int r, c, i, j;

    cout << "Enter the ammount of rows: ";
    cin >> r;

    cout << "Enter the ammount of columns: ";
    cin >> c;

    cout << "Write the values of the first matrix: " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }

    cout << "Write the values of the seconds matrix: " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
        cout << endl;
    }

    cout << "This is the sum of the two matrices: " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            cout << " ";
            cout << sum[i][j];
        }
        cout << endl;
    }
}