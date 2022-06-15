#include <iostream>

using namespace std;
///////////////////// Ex 1 ////////////////////////
// class Date
// {
// private:
//     int day, month, year; // They must be in order

// public:
//     Date(int = 1, int = 1, int = 2020);
//     void display();
// };

// Date::Date(int day1, int month1, int year1)
// {
//     day = day1;
//     month = month1;
//     year = year1;
// };

// void Date::display()
// {
//     cout << day << "/" << month << "/" << year << endl;
// }

// main()
// {
//     Date Default;
//     Date Tomorrow(13, 5, 2022); // Funciona :)
//     Default.display();
//     Tomorrow.display();

//     return 0;
// }

///////////////////// Ex 2 ////////////////////////

// class Person
// {
// private:
//     // They must be in order
//     string firstName, lastName;
//     string zipCode;

// public:
//     Person(string = "X", string = "X", string = "X");
//     void display();
// };

// Person::Person(string name, string lastN, string zip)
// {
//     firstName = name;
//     lastName = lastN;
//     zipCode = zip;
// };

// void Person::display()
// {
//     cout << "Your name is: " << firstName << endl;
//     cout << "Your last name is: " << lastName << endl;
//     cout << "Your zip code is: " << zipCode << endl;
// };

// int main()
// {
//     Person Default;
//     Person Juan("Juanjo", "Caballero", "1420"); // Take into account that my zip code is a string
//     Default.display();
//     Juan.display();
//     return 0;
// }
///////////////////// Ex 3 ////////////////////////
class SavingsAccount
{
private:
    // They must be in order
    string firstName;
    string lastName;
    string zipCode;
    int accountNum;
    int accountBalance;
    int interestRate;

public:
    SavingsAccount(string = "X", string = "X", string = "X");
    SavingsAccount(string, string, string, int, int, int); // For the int variables
    void display();
};

SavingsAccount::SavingsAccount(string name, string lastN, string zip, int bal, int num, int rate)
{
    firstName = name;
    lastName = lastN;
    zipCode = zip;
    accountBalance = bal;
    accountNum = num;
    interestRate = rate;
};

void SavingsAccount::display()
{
    cout << "Your name is: " << firstName << endl;
    cout << "Your last name is: " << lastName << endl;
    cout << "Your zip code is: " << zipCode << endl;
    cout << "Your account number is: " << accountNum << endl;
    cout << "Your account balance is: " << accountBalance << endl;
    cout << "Your interest rate is: " << interestRate << "%" << endl;
};

int main()
{
    SavingsAccount Default;
    SavingsAccount Juan("Juanjo", "Caballero", "1420", 42293, 100, 3);
    Default.display();
    Juan.display();
    return 0;
}