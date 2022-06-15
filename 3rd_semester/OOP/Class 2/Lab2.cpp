#include <iostream>

using namespace std;
/// Ex 2 Regular Work Week ///

// int main()
// {
//     int hourly_wage, std_weekly_pay;
//     cout << "Enter your hourly wage: ";
//     cin >> hourly_wage;
//     std_weekly_pay = hourly_wage * 40;

//     return 0;
// }

/// Ex 3 NetPay ///

// int main()
// {
//     double hourlyWage, hoursWorked, withHolding;
//     cout << "Please enter your hourly wage, number of hours worked and the withholding percentage:\n";
//     cin >> hourlyWage >> hoursWorked >> withHolding;
//     double percentage = withHolding / 100, grossPay = hourlyWage * hoursWorked;
//     double weeklyPay = grossPay - grossPay * percentage;
//     cout << "The net weekly pay is " << weeklyPay << "$";
//     return 0;
// }

/// Ex 5 ///

// int main()
// {
//     float x, y, add, substract, multiply, divide;
//     cout << "Please enter two values\nX: ";
//     cin >> x;
//     cout << "Y: ";
//     cin >> y;
//     add = x + y;
//     substract = x - y;
//     multiply = x * y;
//     divide = x / y;
//     cout << "The arithmetic operation results are:\n";
//     cout << "Addition: " << add << "\nSubstraction: " << substract << endl;
//     cout << "Multiplication: " << multiply << "\nDivision: " << divide << endl;
//     return 0;
// }

/// Ex 6a - Dollar Conversion ///

int main()
{
    int cents;
    float dollars;
    cout << "Enter amount of cents: ";
    cin >> cents;
    dollars = cents / 100.f;
    cout << "You have " << dollars << "$" << endl;
    return 0;
}

/// Ex 9 PhoneCall ///

// struct PhoneCall
// {
//     int min_call;
// };

// int main(void)
// {
//     float cost;
//     PhoneCall myCallToGrandmaOnSunday;
//     myCallToGrandmaOnSunday.min_call = 16;
//     cost = (myCallToGrandmaOnSunday.min_call * 10.f) / 100.f;  // 10.f) / 100.f
//     cout << "I called with my grandma for " << myCallToGrandmaOnSunday.min_call << " minutes and the cost was " << cost << "$" << endl;
//     return 0;
// }

/// Ex 10 Cake ///

// struct Cake
// {
//     int price, calorie;
// };
// int main()
// {
//     int cost_per_calorie;
//     Cake Chocolate;
//     cout << "Enter the amount of calories: ";
//     cin >> Chocolate.calorie;
//     cout << "Enter the amount of price: ";
//     cin >> Chocolate.price;
//     cost_per_calorie = Chocolate.calorie / Chocolate.price;
//     cout << "The ammount of calories is " << Chocolate.calorie << ", the price is " << Chocolate.price << "$, then the cost per calorie is " << cost_per_calorie << endl;
//     return 0;
// }
