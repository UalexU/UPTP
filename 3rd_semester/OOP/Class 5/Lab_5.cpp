#include <iostream>
using namespace std;

/*Write a program that asks the user for two integers and a character, ‘a’, ‘S’, or ‘M’. Call one of three
functions that adds, subtracts, or multiplies the user’s integers, based on the character input. Save the
file as SimpleCalculator.cpp.*/
// int Calculator(char Value, int j, int k)
// {
//     int sum, sub, mult, res;
//     if (Value == 'A')
//     {
//         sum = j + k;
//         res = sum;
//     }

//     if (Value == 'S')
//     {
//         sub = j - k;
//         res = sub;
//     }
//     if (Value == 'C')
//     {
//         mult = j * k;
//         res = mult;
//     }
//     return res;
// }
// int main()
// {
//     int a, b, result;
//     char c;
//     cout << "Input the first integer: ";
//     cin >> a;

//     cout << endl
//          << "Input the second integer: ";
//     cin >> b;

//     cout << "A for add, S for sustract or M for multiply: ";
//     cin >> c;
//     if (c != 'A' || c != 'B' || c != 'M')
//     {
//         cout << "Error, please input A, S or M";
//         exit;
//     }
//     result = Calculator(c, a, b);
//     cout << endl
//          << "Your result is: " << result;
//     return 0;
// }

/*2. Write a program that includes two functions. The first function should ask a salesperson for the
dollar value of daily sales and then return this figure to the main program. The second function
should calculate the salesperson’s commission based on the following rates:
The dollar value of the calculated commission should be returned to the main program, which then displays
it. Save the file as Commission.cpp.*/
// int Dollar_Value()
// {
//     int day;
//     cout << "Daily Sales: ";
//     cin >> day;
//     return day;
// }
// int Commission(int sales)
// {
//     int res;
//     if (sales <= 999)
//         res = sales * 0.03;
//     if (1000 <= sales <= 2999)
//         res = sales * 0.035;
//     if (sales >= 3000)
//         res = sales * 0.045;
//     return res;
// }

// int main()
// {
//     int sales, day_sales;
//     day_sales = Dollar_Value();
//     cout << endl;
//     cout << "Your comission was: " << Commission(day_sales);

//     return 0;
// }

/*3. Write a program that calculates the cost of building a desk. The main()function calls four other
functions. Pass all variables so that the functions make copies of any variables they receive:
    0. » a function to accept as input from the keyboard the number of drawers in the desk. This
    function returns the number of drawers to the main program.
    1. » a function to accept as input the type of wood—‘m’ for mahogany, ‘o’ for oak, or ‘p’ for
    pine.
    2. » a function that receives the drawer number and wood type, and calculates the cost of the
    desk based on the following:
    Pine desks are $100.
    Oak desks are $140.
    all other woods are $180.
    a $30 surcharge is added for each drawer.
    This function returns the cost to the main()function.
    3. » a function to display the final price. Save the file as Desks.cpp.*/

// int main()
// {

//     return 0;
// }

/*4. Write a program that prompts the user to enter five integers that you store in an array. Write a
function called quadruple()that takes a single-integer parameter and multiplies it by 4, returning
the result to the calling program. Call the function once for each of the five integers, then display the
quadrupled results from within the main()function. Save the file as Quadruple.cpp.*/

// int main()
// {

//     return 0;
// }

/*5. Write a program that asks students how many tests they have taken so far in a course. The program
should accept any number from 1 to 5, but reprompt the user if the entry is invalid. The user can then
enter the appropriate number of test scores, which you store in an array. Pass the number of tests
and the array of test scores to a function that aver- ages the student’s test scores and displays the
average. The function should compute a correct average whether the student has taken one, two,
three, four, or five tests. Save the file as Studentaverage.cpp.*/

// int main()
// {

//     return 0;
// }

/*6. Create a structure named Carpet that has two public data members: lengthInFeet and
widthInFeet. Write a main()function that instantiates a Carpet object and assigns values to its
data fields. Pass the object to a function named displayarea()that calcu- lates the Carpet area in
square feet and displays the results. Save the file as Carpet.cpp.*/
// struct Carpet
// {
//     int LenghtInFeet;
//     int WithInFeet;
// };

// void displayarea(int a, int b)
// {
//     int area;
//     area = a * b;
//     cout << "This is the area of the carpet: " << area;
// }
// int main()
// {

//     Carpet Red;
//     Red.LenghtInFeet = 4;
//     Red.WithInFeet = 2;
//     displayarea(Red.LenghtInFeet, Red.WithInFeet);
//     return 0;
// }

/*7. Create a structure named Shirt that has the public data members collarSize and sleeveLength.
Create a structure named Pants that has the public data members waistSize and inSeam. Write a
program that declares one object of each type Shirt and Pants and assigns values to the objects’
data fields. Write two overloaded functions named displayClothingFacts(). One version of the
function takes a Shirt object as a parameter; the other version takes a Pants object. Each version
displays the facts about the piece of clothing. Your main()function should demonstrate that you can
call displayClothingFacts()with either type of clothing. Save the file as Shirt.cpp.*/

struct Shirt
{
    int collarSize;
    int sleeveLenght;
};
struct Pants
{
    int waistSize;
    int inSeam;
};

int displayClothingFacts1(int a, int b);
int displayClothingFacts1(int a, int b);

int main()
{
    Shirt Zara;
    Pants Jeans;
    displayClothingFacts(Zara.collarSize, Jeans.waistSize);
    return 0;
}

/*8. Create a structure named Dog with a string field for the Dog’s name. Create a structure named Cat
with a string field for the Cat’s name. Write a program that declares one Dog and one Cat, and
assign names to them. Write two overloaded functions named speak(). If you pass the Dog to
speak(), the speak()function should display the Dog’s name and a description of how dogs speak
(for example, “Spot says woof ”). If you pass the Cat to the version of speak()that accepts a Cat
parameter, then it should display the Cat’s name and a description of how cats speak (for example,
“Tiger says meow”). Save the file as CatDog.cpp.*/

// int main()
// {

//     return 0;
// }