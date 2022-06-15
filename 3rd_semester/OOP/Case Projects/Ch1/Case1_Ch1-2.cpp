#include <iostream>
#include <iomanip> //This library was included in order to set two decimal point in the floating point conversion but its optional

using namespace std;
//
struct Fraction // Third
{
    int numerator, denominator;
};

int main(void)
{
    Fraction First, Second, Third;
    float equivalent1, equivalent2;
    // First Fraction
    cout << "First fraction numerator: ";
    cin >> First.numerator;
    cout << "First fraction denominator: ";
    cin >> First.denominator;

    // Second Fraction
    cout << "Second fraction numerator: ";
    cin >> Second.numerator;
    cout << "Second fraction denominator: ";
    cin >> Second.denominator;

    // Floating-Point conversion to 2 decimal positions
    equivalent1 = (float)First.numerator / (float)First.denominator;
    equivalent2 = (float)Second.numerator / (float)Second.denominator;

    // I added a 2 decimal position precision to make it easier to read
    cout << "The first fraction " << First.numerator << "/" << First.denominator << " is equal to: " << fixed << setprecision(2) << equivalent1 << endl;
    cout << "The second fraction " << Second.numerator << "/" << Second.denominator << " is equal to: " << fixed << setprecision(2) << equivalent2 << endl;

    // Third Fraction Calculation
    Third.numerator = First.numerator * Second.denominator + Second.numerator * First.denominator;
    Third.denominator = First.denominator * Second.denominator;
    cout << "The third fraction is equal to " << Third.numerator << "/" << Third.denominator;

    return 0;
}

//////////////////////////////
//     HW-1                 //
//     Name: Alex Villalba  //
//     Career: IFE          //
//////////////////////////////