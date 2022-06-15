#include <iostream>
#include <iomanip> //This library was included in order to set two decimal point in the floating point conversion but its optional

using namespace std;

// CH3
// In Chapters 1 and 2 you developed a Fraction structure for Teacher’s Pet Software. The
// structure contains two public data fields for numerator and denominator. Add a third field
// that can hold the whole-number portion of a Fraction. Write a main()function in which
// you create three Fraction objects. Prompt the user for values for each field of two of the
// Fractions. Add statements to the main()function to do the following:
// » If the user enters a 0 denominator for a Fraction, force it to be 1.
// » Display each Fraction. If the whole-number portion is greater than 1, use it in the
// output, but if the whole-number portion is 0, just display the fraction portion. For example, a Fraction with value 0 1/3 should display as 1/3. If the numerator of a Fraction is
// 0, then just display the whole-number portion; for example, if the user enters 2 0/3, just
// display 2. If the whole-number portion is 0 and the numerator is 0, as in 0 0/2, then just
// display 0.
// » Determine whether the value of the first Fraction is greater than, equal to, or less than
// the value of the second Fraction. For example, 1/2 and 3/6 are equal. As another example, 1 1/2 and 0 3/2 also are equal. Display an appropriate message indicating the results.
// » Determine whether each entered Fraction is more than 1, and reduce the Fraction if
// it is. For example, 7/2 should be reduced to 3 1/2, and 10/4 should be reduced to 2 2/4 (in
// other words, you do not need to reduce it to 2 1/2). If the Fraction is not more than 1,
// then set the whole-number field to 0. Display the reduced Fraction.
// » Prompt the user to enter an arithmetic operation: +, or *. Calculate the third Fraction to
// be the result of applying the requested operation to the two entered Fractions. Display
// the result as a whole number, if any, and the fractional part, if any. For example, adding
// 1/4 and 1/4 results in 2/4 (you do not need to reduce 2/4 to 1/2), subtracting 1/5 from 3/1
// results in 2 4/5, and multiplying 1/3 by 6/1 results in 2. Display the results.
struct Fraction
{
    int numerator, denominator, whole;
};

void SimpleFraction(int *num, int *den, int *whole)
{

    if (num >= den)
    {
        num = num - den;
        whole++;
        SimpleFraction(num, den, whole);
        // Falta que se modifique mis variables en mi funcion principal
    }
}

int main(void)
{
    Fraction First, Second, Third;
    float equivalent1, equivalent2;
    // First Fraction
    cout << "First whole number: ";
    cin >> First.whole;
    cout << "First fraction numerator: ";
    cin >> First.numerator;
    cout << "First fraction denominator: ";
    cin >> First.denominator;
    // Convert my undetermined 0 denominator into a 1 to avoid mathematical error
    if (First.denominator == 0)
        First.denominator = 1;

    SimpleFraction(First.numerator, First.denominator, First.whole);

    // Second Fraction
    cout << "Second whole number: ";
    cin >> Second.whole;
    cout << "Second fraction numerator: ";
    cin >> Second.numerator;
    cout << "Second fraction denominator: ";
    cin >> Second.denominator;
    // Convert my undetermined 0 denominator into a 1 to avoid mathematical error
    if (Second.denominator == 0)
        Second.denominator = 1;

    SimpleFraction(Second.numerator, Second.denominator, Second.whole);
    cout << First.numerator;
    // Floating-Point conversion to 2 decimal positions
    equivalent1 = (float)First.whole + ((float)First.numerator / (float)First.denominator);
    equivalent2 = (float)Second.whole + ((float)Second.numerator / (float)Second.denominator);

    // Here I made 3 if statements for the first and second fraction in order to display the result properly
    // I added as well a 2 decimal position precision to make it easier to read
    if (First.whole < 1 && First.numerator != 0)
        cout << "The first fraction " << First.numerator << "/" << First.denominator << " is equal to: " << fixed << setprecision(2) << equivalent1 << endl;

    else if (First.whole < 1 && First.numerator == 0)
        cout << "The first fraction is equal to 0";

    else if (First.whole >= 1 && First.numerator != 0)
        cout << "The first fraction " << First.whole << " " << First.numerator << "/" << First.denominator << " is equal to: " << fixed << setprecision(2) << equivalent1 << endl;

    if (Second.whole < 1 && Second.numerator != 0)
        cout << "The second fraction " << Second.numerator << "/" << Second.denominator << " is equal to: " << fixed << setprecision(2) << equivalent2 << endl;

    else if (Second.whole < 1 && Second.numerator == 0)
        cout << "The second fraction is equal to 0";

    else if (Second.whole >= 1 && Second.numerator != 0)
        cout << "The second fraction " << Second.whole << " " << Second.numerator << "/" << Second.denominator << " is equal to: " << fixed << setprecision(2) << equivalent2 << endl;

    // Third Fraction Calculation
    Third.numerator = First.numerator * Second.denominator + Second.numerator * First.denominator;
    Third.denominator = First.denominator * Second.denominator;
    cout << "The third fraction is equal to " << Third.numerator << "/" << Third.denominator;

    return 0;
}
