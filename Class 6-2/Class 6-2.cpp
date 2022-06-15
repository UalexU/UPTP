#include <iostream>

using namespace std;

// 0. Design a SoccerPlayer class that includes three integer fields: a player’s jersey number, number of
// goals, and number of assists. Overload extraction and insertion operators for the class.
// 1. Include an operator>()function for the class. One SoccerPlayer is considered greater than
// another if the sum of goals plus assists is greater.
// 2. Create an array of 11 SoccerPlayers, then use the > operator to find the player who has the greatest
// total of goals plus assists. Save the file as SoccerPlayer.cpp.

class SoccerPlayer
{
private:
    int jerseyNum, goalNum, assistNum;

public:
    friend ostream &operator<<(ostream &out, const SoccerPlayer &player);
    friend istream &operator<<(istream &in, SoccerPlayer &player);
    int operator<(SoccerPlayer &Player);
};

ostream &operator<<(ostream &out, const SoccerPlayer &player)
{
    out << "Soccer Player:  \n * Jersey number: " << player.jerseyNum << endl;
    out << " * Goal number: " << player.goalNum << endl;
    out << " * Assist number: " << player.assistNum << endl;
    return out;
};

istream &operator<<(istream &in, SoccerPlayer &player)
{
    cout << "Enter jersey number: ";
    in >> player.jerseyNum;
    cout << "Enter goal number: ";
    in >> player.goalNum;
    cout << "Enter assist number: ";
    in >> player.assistNum;
    return in;
};

SoccerPlayer::operator<()

    int main(void)
{
    SoccerPlayer
}

// Design a Dog class that includes fields for a breed (for example, “Labrador”) and eye color. Include
// extraction and insertion operators.

// Overload an operator*()function for the Dog class. When you multiply two Dogs, the result is a
// Dog. If the two operand Dogs are the same breed, then the resulting Dog is that breed; if the two
// operand Dogs have different breeds, then the resulting Dog is “Mixed” breed. Obtain a random
// number of 0 or 1 for the resulting Dog’s eye color. (See Appendix E for instructions on creating random
// numbers.) When the random number chosen is 0, use the eye color from the first operand Dog for the
// resulting Dog’s eye color; when the random number is 1, use the eye color of the second Dog for the
// result Dog.

// c. Write a main()function in which you declare four parent Dogs. When you execute the program,
// make sure you assign the same breed to two Dogs, and different breeds to each of the other two Dogs.
//(You will have a total of three breeds for the four Dogs.) Also assign a variety of eye colors. In a loop,
// multiply each pair eight times, and display the results. Save the file as Dog.cpp.

// a. Create a PhoneBook class. Fields include first name, last name, area code, and phone number.
// 2. Include an extraction operator that prompts the user for values for each field. Also include an insertion
// operator that displays the values of each field.
// 3. Overload the operator[]()function to change a PhoneBook object’s phone number (but not area
// code).
// d. Overload the operator()()function to change the area code and phone number.
// e. Write a main()function in which you declare an array of five PhoneBook objects and assign data to each. Using a
// loop, display numbers 1 through 5, along with each object’s data. Prompt the user to select a number 1 through 5 to
// modify a PhoneBook entry. When the user has chosen an entry, ask whether the user wants to alter an entire entry,
// alter the entire phone number including the area code, or alter just the phone number and not the area code. Accept new
// data values accordingly. If the user wants to modify an entire entry, create a tempo- rary object, assign values, and use the
// built-in = operator to assign the temporary object to the correct location in the array. If the user wants to change the area
// code and phone number, or change the phone number only, prompt for values, then use either the [ ] or ( ) operator to
// assign the new values to the proper existing object within the array. After the update has taken effect, redisplay the five
// PhoneBook entries. Save the file as PhoneBook.cpp.