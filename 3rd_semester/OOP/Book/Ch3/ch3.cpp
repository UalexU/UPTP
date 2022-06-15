#include <iostream>

using namespace std;

/// Ex 5 OvertimeAndNet.cpp ///

// int main(void)
// {
//     int h_wage, num_hrs, gross, extra, normal, whithholdings, net;
//     cout << "Enter hourly wage: ";
//     cin >> h_wage;
//     cout << "Enter hours worked: ";
//     cin >> num_hrs;
//     normal = h_wage * num_hrs;
//     if (num_hrs <= 40)
//     {
//         gross = normal;
//         cout << "Your gross pay was: " << gross << endl;
//     }
//     else
//     {
//         num_hrs = num_hrs - 40;
//         gross = normal + num_hrs * 1.5 * h_wage;
//         cout << "Your gross pay was: " << gross << endl;
//     }
//     if (gross >= 1000)
//     {
//         whithholdings = 0.28 * gross;
//     }
//     else if (gross < 1000 && gross >= 600)
//     {
//         whithholdings = 0.21 * gross;
//     }
//     else
//     {
//         whithholdings = 0.1 * gross;
//     }

//     net = gross - whithholdings;
//     cout << "Your net pay was: " << net << endl;
// }