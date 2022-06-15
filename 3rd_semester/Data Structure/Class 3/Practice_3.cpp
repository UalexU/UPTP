#include <iostream>

using namespace std;

/// Insert a value in an array ///

// int main()
// {
//     int arr[10] = {0};
//     int pos;
//     int i;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int a = 0;

//     // Fill the array with the user values
//     cout << "Enter the array values: ";
//     for (i = 0; i < n; i++)
//         cin >> arr[i];

//     // Print array
//     for (i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     // Add a new line
//     cout << endl;

//     // Enter position to delete
//     cout << "Enter the position you want to delete: ";
//     cin >> pos;

//     // Increment the size of the array by 1
//     n += 1;

//     // Move one position to the end
//     for (i = n; i > pos; i--)
//         arr[i] = arr[i - 1];

//     // Add the value to the position
//     arr[pos] = a;

//     // Print new array
//     cout << "This is the new array: ";
//     for (i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }

/// Delete a value in an array ///

// int main()
// {
//     int arr[10] = {0};
//     int pos;
//     int i;
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // Fill the array with the user values
//     cout << "Enter the array values: ";
//     for (i = 0; i < n; i++)
//         cin >> arr[i];

//     // Print array
//     for (i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     // Add a new line
//     cout << endl;

//     // Enter position to delete
//     cout << "Enter the position you want to delete: ";
//     cin >> pos;

//     // Move one position to the end
//     for (i = pos; i < n; i++)
//         arr[i] = arr[i + 1];

//     // Decrement the size of the array by 1
//     n = n - 1;

//     // Print new array
//     cout << "This is the new array: ";
//     for (i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }