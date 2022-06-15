#include <iostream>
using namespace std;

/*Write a program that prompts the user to enter an array of integers (7 elements), reverses a
array and prints it on the screen.*/
// int main()
// {
//     int n, i;
//     cout << "Array size: ";
//     cin >> n;
//     // For loop to traverse each addres of the array and give them a value
//     int array[n] = {0};
//     for (i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     // find the size of array
//     int size = sizeof(array) / sizeof(array[0]);

//     // declare new array to store reverse of original array
//     int k = 0, reverse[size];

//     // Loop from back and assig value to new array
//     for (i = size - 1; i >= 0;)
//     {
//         reverse[k++] = array[i--];
//     }

//     // output the reverse array
//     for (i = 0; i < size; i++)
//     {
//         cout << reverse[i] << ", ";
//     }
//     return 0;
// }

/*Write a program that asks the user to type 10 integers of an array and an integer value V.
The program must search if the value V exists in the array and must remove the first
occurrence of V, shifting each following element left and adding a zero at the end of the
array. The program must then print the final array.*/

// int main()
// {
//     // Initialize all variables
//     int V, i, pos;
//     int a[10] = {0};
//     int size = sizeof(a) / sizeof(a[0]);
//     // Enter the V values to search
//     cout << "Enter the value V: " << endl;
//     cin >> V;
//     cout << endl;
//     cout << "Enter the array values : " << endl;
//     // for loop to input the values in the array
//     for (i = 0; i < 10; i++)
//     {
//         cin >> a[i];
//     }
//     // Move the V value into the last position
//     for (i = 0; i < 10; i++)
//     {
//         if (a[i] == V)
//         {
//             for (pos = i; pos < size - 1; pos++)
//             {
//                 a[pos] = a[pos + 1];
//             }
//         }
//     }
//     // Set the last position to 0
//     a[size - 1] = 0;

//     // Print the new array
//     cout << "The new array is: " << endl;
//     for (i = 0; i < 10; i++)
//     {
//         cout << a[i] << " ";
//     }
//     return 0;
// }

// /*Write a program that asks the user to type 10 integers of an array and an integer value V and
// an index value i between 0 and 9. The program must put the value V at the place i in the
// array, shifting each element right and dropping off the last element. The program must then
// print the final array.*/

// int main()
// {
//     // Initialize all variables
//     int V, index, j, last, i, temp;
//     int a[10] = {0};
//     int size = sizeof(a) / sizeof(a[0]);
//     // Enter the V values to search
//     cout << "Enter the value V: " << endl;
//     cin >> V;
//     cout << "Enter the index value: " << endl;
//     cin >> index;
//     cout << endl;
//     cout << "Enter the array values : " << endl;
//     // for loop to input the values in the array
//     for (j = 0; j < size; j++)
//     {
//         cin >> a[j];
//     }
//     // Move the V value into the last position
//     for (j = 0; j < size; j++)
//     {
//         // If the position j is equal to thhe array with position i enter the loop
//         if (a[j] == a[index])
//         {
//             // Set variable last equal to the size of the array and swaps the last item of the array to the index position we chose
//             for (last = size; last > index; last--)
//             {
//                 temp = last - 1;
//                 a[last - 1] = a[last];
//                 a[last] = temp;
//             }

//             // Converts the index position we chose to the value we gave
//             a[index] = V;
//         }
//     }
//     // Errase last position
//     size = size - 1;
//     // Print the new array
//     cout << "The new array is: " << endl;
//     for (i = 0; i < size; i++)
//     {
//         cout << a[i] << " ";
//     }
//     return 0;
// }

/*Write a program that search for a number in an int type array of length 10, using binary
search. Print the position of the element found.*/

// // Define a function to return the postion using binary search
// int binarySearch(int array[], int size, int Value)
// {
//     // Define local variables
//     int low = 0, mid, high;

//     // Assign the highes possible position of the array
//     high = size - 1;

//     // While loop to update the mid position
//     while (low <= high)
//     {

//         // Gave value to the mid position
//         mid = (high + low) / 2;

//         if (Value == array[mid])
//         {
//             // Return the postion once the value is find
//             return mid;
//         }
//         else if (Value < array[mid])
//         {
//             // Updates the top boundary to be less than half of the array
//             high = mid - 1;
//         }
//         else
//             // Updates the bottom boundary to be more than half of the array
//             low = mid + 1;
//     }
//     return -1;
// }

// int main()
// {
//     // Initialize Variables, array, our value to search and the positions
//     int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int searchValue;

//     // Find size of array
//     int size = sizeof(arr) / sizeof(arr[0]);

//     // Enter the value to search in the array
//     cout << "Enter your value to search: ";
//     cin >> searchValue;
//     // Call my function with the input arguments for my function
//     int pos = binarySearch(arr, size, searchValue);

//     // Returns the postion if exists in the array
//     if (pos >= 0)
//         cout << "The position of your value is " << pos << endl;

//     // If value not found (that means that the function returns -1) displays the message
//     else
//         cout << "The value is not in the array" << endl;

//     return 0;
// }

/*Write a program which takes 2 arrays of 10 integers each, a and b. c is an array with 20
integers. The program should put into c the appending of b to a, the first 10 integers of c from
array a, the latter 10 from b. Then the program should display c.*/

// int main()
// {
//     // Initilize variables
//     int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, b[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, c[20];
//     int i, j;
//     // Set the values of the first two arrays through a for loop that first enters in the first array and then enters in the second array
//     for (i = 0; i < 2; i++)
//     {
//         // Copies the values of the first 10 terms of a in c
//         if (i == 0)
//         {
//             for (j = 0; j < 10; j++)
//             {
//                 c[j] = a[j];
//             }
//         }
//         // Copies the values of the next 10 terms of b in c

//         if (i == 1)
//         {
//             for (j = 10; j < 20; j++)
//             {
//                 // I restart the position of array b by resting 10 to the position variable j
//                 c[j] = b[j - 10];
//             }
//         }
//     }
//     // Display the new array c
//     cout << "This is the new array: " << endl;
//     for (i = 0; i < 20; i++)
//     {
//         cout << c[i] << " ";
//     }

//     return 0;
// }

/*Write a program that find the element 3 in the array {2, 3, 4, 3, 5, 10, 3, 100, 20, 20, 3, 100}.
Count the number of occurrences of 3 and then delete it from the array. (For this exercise,
you can use another auxiliary array to store the values different from 3). Display both the
original and processed array.*/

// int main()
// {
//     // Initialize variables and the array
//     int i, count = 0, pos;
//     int array[] = {2, 3, 4, 3, 5, 10, 3, 100, 20, 20, 3, 100};

//     // Calculate the size of the array
//     int size = (sizeof(array) / sizeof(array[0])), size2;

//     // Print original array
//     cout << "This is the original array: " << endl;
//     for (i = 0; i < size; i++)
//     {
//         cout << array[i];
//         cout << " ";
//     }

//     cout << endl;

//     // Here the i value traverse all the array to find the position where the value is 3
//     for (i = 0; i < size - 1; i++)
//     {
//         // Enter the if statement if the position has a value equal to 3
//         if (array[i] == 3)
//         {
//             // Count the value 3 into my variable
//             count++;

//             // Move the position where the value 3 is to the end
//             for (pos = i; pos < size - 1; pos++)
//             {

//                 array[pos] = array[pos + 1];
//             }
//         }
//     }

//     // Delete the 3 values that moved to the end of the array and defined a new size for the array
//     size = size - count;

//     // Displayed the ammount of 3 values
//     cout << "You have count 3: " << count << " times" << endl;

//     // Display the new array without the 3's
//     cout << "This is the new array: " << endl;
//     for (i = 0; i < size; i++)
//     {
//         cout << array[i];
//         cout << " ";
//     }

//     return 0;
// }