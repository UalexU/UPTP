#include <iostream>

using namespace std;

/*Write a program that allows the user to enter 12 double values representing store sales for each
month of one year. After all 12 values are entered, display each month’s sales amount and a message
indicating whether it is higher, lower, or equal to the average month’s sales amount. Name the file
MonthlySales.cpp.*/
int main()
{
    // declare the variables
    double arr[11] = {0};
    int i;
    double avg, sum;
    // Size of the array in a variable
    int size = sizeof(arr) / sizeof(arr[0]);
    // Add the sales values for each month in an array
    cout << "Enter the sales for each month: " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    // The average of the total sales with total ammount of months
    avg = sum / size;

    for (i = 0; i < size; i++)
    {
        cout << arr[i];
        cout << " ";
    }
    cout << endl;
    cout << "Your average sales is : " << avg << endl;
    // if statements that compare your total sales with your average
    for (i = 0; i < size; i++)
    {
        if (arr[i] < avg)
        {
            cout << "The sales where lower than the average" << endl;
        }
        else if (arr[i] == avg)
        {
            cout << "The sales where equal to the average" << endl;
        }
        else
        {
            cout << "The sales where higher than the average" << endl;
        }
    }
    return 0;
}

/*Audubon High School is holding a fundraiser. Declare an array that can hold contribution amounts
for each of the four classes: freshman, sophomore, junior, and senior. Prompt the user for the four
total contribution amounts. Display the four amounts, their sum, and their average. Name the file
FundRaiser.cpp.*/
int main(void)
{
    // Declare array and input the contributions in the differents array elements
    int arr[3];
    int avg, sum = 0;
    cout << "Enter the contribution of the freshmans: ";
    cin >> arr[0];
    cout << "Enter the contribution of the sophmores: ";
    cin >> arr[1];
    cout << "Enter the contribution of the juniors: ";
    cin >> arr[2];
    cout << "Enter the contribution of the seniors: ";
    cin >> arr[3];
    cout << "The contribution of the freshmans: " << arr[0] << endl;
    cout << "The contribution of the sophmores: " << arr[1] << endl;
    cout << "The contribution of the juniors: " << arr[2] << endl;
    cout << "The contribution of the seniors: " << arr[3] << endl;
    // For loop to sum the array values and print it
    for (int i = 0; i < 3; i++)
        sum += arr[0];
    cout << "The sum is: " << sum << endl;
    // The avg is the sum of the contributions divided by the ammount of contributions and print it at the end
    avg = sum / 4;
    cout << "The average is: " << avg << endl;
    return 0;
}