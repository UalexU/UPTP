#include <iostream>
using namespace std;

// Bubble sort
// int main()
// {

//     int size, i;
//     cout << "Please enter the size of the array: ";
//     cin >> size;
//     int a[size] = {0};
//     cout << "The elements: ";

//     for (i = 0; i < size; i++)
//         cin >> a[i];

//     cout << "Your array a[" << size << "]= ";

//     for (i = 0; i < size; i++)
//         cout << a[i] << " ";
//     for (int pass = 0; pass < size - 1; pass++)
//         for (int i = 0; i < size - 1 - pass; i++)
//             if (a[i] > a[i + 1])
//             {
//                 int temp = a[i];
//                 a[i] = a[i + 1];
//                 a[i + 1] = temp;
//             }
//     cout << endl
//          << "Your sorted array a[" << size << "] is: ";
//     for (i = 0; i < size; i++)
//         cout << a[i] << " ";
//     return 0;
// }

// Insertion Sort
int main()
{
    int size, i;
    int temp;
    cout << "Please enter the size of an array: ";
    cin >> size;
    int a[size] = {0};
    cout << "The elements: ";

    for (i = 0; i < size; i++)
        cin >> a[i];

    cout << "Your array a[" << size << "]: ";
    for (i = 0; i < size; i++)
        cout << a[i] << " ";
    for (int k = 1; k < 7; k++)
    {
        int temp = a[k];
        int j = k - 1;
        while (j >= 0 && temp <= a[j])
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
    }
    cout << endl
         << "Your sorted array a[" << size << "]:";
    for (i = 0; i < size; i++)
        cout << a[i] << " ";
    return 0;
}