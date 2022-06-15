//////////////////////////////////
///////// Alex Villalba //////////
///////////// IFE ////////////////

#include <iostream>
using namespace std;

// Ex - 1
class Movie
{
private:
    string title;
    int year;
    string director;

public:
    void setTitle(string);
    void setYear(int);
    void setDirector(string);
};
void Movie::setTitle(string movieTitle)
{
    title = movieTitle;
    cout << title << endl;
}
void Movie::setYear(int movieYear)
{
    year = movieYear;
    cout << year << endl;
}
void Movie::setDirector(string theDirector)
{
    director = theDirector;
    cout << director << endl;
}

int main(void)
{
    Movie myFavoriteMovie;
    myFavoriteMovie.setDirector("Juan");
    myFavoriteMovie.setYear(2010);
    myFavoriteMovie.setTitle("Avatar");
    return 0;
}

// Ex - 2

// // Initialize the class with the values
// class Customer
// {

//     // Private means can't be accesed for other functions unless we make another variable modify it
// private:
//     string Name;
//     string Last_Name;
//     int ID;
//     int creditLimit;

//     // Initialize the public variables that are going to modify the values of the class
// public:
//     void setName(string);
//     void setLastName(string);
//     void setID(int);
//     void setCredit(int);
// };

// /////// Here I initialize the functions that will modify the differents values of the class using the arguments inputed in the the main function

// void Customer::setName(string personName)
// {
//     Name = personName;
//     cout << "The name is: " << Name << endl;
// }
// void Customer::setID(int theID)
// {
//     ID = theID;
//     cout << "The ID is: " << ID << endl;
// }
// void Customer::setCredit(int theCredit)
// {
//     creditLimit = theCredit;
//     if (creditLimit > 10000)
//     {
//         cout << "Sorry this credit is not allowed, please input a valid number: ";
//         cout << endl;
//         cin >> creditLimit;
//         setCredit(creditLimit);
//     }
//     else
//         cout << "The line of credit is: " << creditLimit << endl;
// }
// void Customer::setLastName(string theLastName)
// {
//     Last_Name = theLastName;
//     cout << "The last name is: " << Last_Name << endl;
// }

// // Here starts the main function

// int main(void)
// {
//     // Create 2 class objects
//     Customer Juan;
//     Customer Customers[5];
//     // Made temporal variables to hold the names and integers values of the information needed for each customer in the for loop
//     string temp1, temp2;
//     int temp3, temp4;

//     Juan.setName("Juan");
//     Juan.setID(5101);
//     Juan.setLastName("Venecio");
//     Juan.setCredit(9200);
//     // For loop that traverse the array of customers, it inputs a complete name, last name, ID and credit for each customer in the array
//     for (int i = 0; i < 5; i++)
//     {
//         cout << "Name of the [" << i << "] customer: ";
//         cin >> temp1;
//         Customers[i].setName(temp1);
//         cout << "Last name of the [" << i << "] customer: ";
//         cin >> temp2;
//         Customers[i].setLastName(temp2);
//         cout << "ID of the [" << i << "] customer: ";
//         cin >> temp3;
//         Customers[i].setID(temp3);
//         cout << "Credit of the [" << i << "] customer: ";
//         cin >> temp4;
//         Customers[i].setCredit(temp4);
//     }
//     return 0;
// }
