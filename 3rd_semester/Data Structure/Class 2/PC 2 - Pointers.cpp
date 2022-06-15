#include <iostream>

using namespace std;

/// Part 1 ///

int main(void)
{
    int num1, num2;
    int *p;
    cout << "Num 1: ";
    cin >> num1;
    cout << "Num 2: ";
    cin >> num2;
    cout << "Num 1 is " << num1 << " an the num 2 is " << num2 << endl;

    /// Part 1 ///

    p = &num1;
    *p = 100;
    cout << "Num 1 value: " << num1 << endl;
    cout << "The address of num 1: " << &num1 << endl;
    cout << "The address of the pointer: " << &p << endl;
    cout << "New num 1 value: " << *p << endl;

    /// Part 2 ///

    p = &num2;
    *p = 300;
    cout << "Num 2 value: " << num2 << endl;
    cout << "The address of num 2: " << &num2 << endl;
    cout << "The address of the pointer: " << &p << endl;
    cout << "New num 2 value: " << *p << endl;
    *p = num2 * 2;
    cout << "Modified num 2 value: " << *p << endl;

    /// Part 3 ///

    cout << "New Num 2: ";
    cin >> num2;
    p = &num2;
    cout << "The pointer value is " << *p << endl;

    int a, b;
    int *ptrA, *ptrB;
    cout << "Enter the a and b values respectively: ";
    cin >> a >> b;
    ptrA = &a;
    ptrB = &b;
    cout << "Pointer A: " << *ptrA << endl
         << "Pointer B: " << *ptrB << endl;

    int ch;
    char *ptrC;
    char string[] = "A string";
    ptrC = &string[0];
    cout << string[0] << endl
         << *ptrC << endl
         << string[2] << endl;
    ptrC = &string[2];
    cout << *ptrC << endl
         << string[3] << endl
         << string[7] << endl;

    return 0;
}
