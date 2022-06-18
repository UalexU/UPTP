#include <iostream>
#include <string>
using namespace std;

// 4. A CollegeCourse class includes fields representing department, course number, credit hours, and tuition.
// Its child, LabCourse, includes one more field that holds a lab fee charged in addition to the tuition. Create
// appropriate functions for these classes, and write a main()function that instantiates and uses objects of each
// class. Save the file as Courses.cpp.

// class CollegeCourse
// {
// private:
//     string department;
//     int courseNumber;
//     int creditHours;
//     int tuition;

// public:
//     CollegeCourse(string dep, int cNum, int cHours, int tuit)
//     {
//         department = dep;
//         courseNumber = cNum;
//         creditHours = cHours;
//         tuition = tuit;
//     };
//     void show()
//     {
//         cout << "The department name is: " << department << endl;
//         cout << "The course number is: " << courseNumber << endl;
//         cout << "The credit hours are: " << creditHours << endl;
//         cout << "The tuition is: " << tuition << endl;
//     }
// };

// class LabCourse : public CollegeCourse
// {
// private:
//     int labFee;

// public:
//     LabCourse(string, int, int, int, int);
//     void show()
//     {
//         CollegeCourse::show();
//         cout << "The lab fee is: " << labFee << endl;
//     }
// };

// LabCourse::LabCourse(string dep, int cNum, int cHours, int tuit, int labF) : CollegeCourse::CollegeCourse(dep, cNum, cHours, tuit)
// {
//     labFee = labF;
// }

// int main()
// {
//     CollegeCourse Programing("Science", 120, 240, 300);
//     LabCourse Third("Physics", 162, 240, 300, 60);
//     Programing.show();
//     Third.show();

//     return 0;
// }

// 5. Create a RestaurantMeal class that holds the name and price of a food item served by a restaurant. Its
// constructor requires arguments for each field. Create a HotelService class that holds the name of the
// service, the service fee, and the room number to which the service was supplied. Its constructor also requires
// arguments for each field. Create a RoomServiceMeal class that inherits from both RestaurantMeal and
// HotelService.

// Whenever you create a RoomServiceMeal object, the constructor assigns the string “room
//  service” to the name of the service field, and $4.00 is assigned to the service fee inherited from
//  HotelService. Include a RoomServiceMeal function that displays all of the fields in a RoomServiceMeal
//  by calling display functions from the two parent classes. Additionally, the display function should display the
//  total of the meals plus the room service fee. In a main()function, instantiate a RoomServiceMeal object that
//  inherits from both classes. For example, a “steak dinner” costing $19.99 is a “room service” provided to room
//  1202 for a $4.00 fee. Save the file as RoomService.cpp.

// PARENT CLASS RESTAURANT MEAL
class RestaurantMeal
{
private:
    string foodName;
    double foodPrice;

public:
    // Restaurant meal constructor
    RestaurantMeal(string fname, double fprice)
    {
        foodName = fname;
        foodPrice = fprice;
    };
    void display();
    double getFoodPrice();
};

void RestaurantMeal::display()
{
    cout << "The food name is: " << foodName << endl;
    cout << "The food price is: " << foodPrice << endl;
}

double RestaurantMeal::getFoodPrice()
{
    return foodPrice;
}
// PARENT CLASS HOTEL SERVICE

class HotelService
{
private:
    string serviceName;
    double serviceFee;
    int roomNumber;

public:
    // Hotel service class constructor
    HotelService(string sName, double sfee, int rnum)
    {
        serviceName = sName;
        serviceFee = sfee;
        roomNumber = rnum;
    };
    void display();
    double getServiceFee();
};

// Display function
void HotelService::display()
{
    cout << "The service name is: " << serviceName << endl;
    cout << "The service price is: " << serviceFee << endl;
    cout << "The room number is: " << roomNumber << endl;
}

// Service fee function
double HotelService::getServiceFee()
{
    return serviceFee;
}

// ROOM SERVICE CHILD CLASS
class RoomServiceMeal : public RestaurantMeal, public HotelService
{

public:
    // RoomServiceMeal Constructor (No matchin function for call error)
    RoomServiceMeal(string, double, int);

    void display()
    {
        RestaurantMeal::display();
        HotelService::display();
        cout << "Your total due payment is: " << getServiceFee() + getFoodPrice() << endl;
    }
};

RoomServiceMeal::RoomServiceMeal(string foodName, double foodPrice, int roomNumber) : HotelService("ROOM SERVICE", 4.00, roomNumber), RestaurantMeal(foodName, foodPrice)
{
}

int main(void)
{
    RoomServiceMeal Meal("Lunch in the hall", 19.99, 1202);
    Meal.display();
    return 0;
}

// 7. Create an Investment class that contains fields to hold the initial value of an investment, the current
// value, the profit (calculated as the difference between current value and initial value), and the percent profit
// (the profit divided by the initial value). Include a constructor that requires initial and current values and a
// display function. Create a House class that includes fields for street address and square feet, a constructor
// that requires values for both fields, and a display function. Create a HouseThatIsAnInvestment class that
// inherits from Investment and House. It includes a constructor and a display function that calls the display
// functions of the parents. Write a main()function that declares a HouseThatIsAnInvestment and displays
// its values. Save the file as HouseThatIsAnInvestment.cpp.

// class Investment
// {
// private:
//     int initial, current, profit /*Current - initial*/, percentProfit /*Profit divided initial value*/;

// public:
//     void display()
//     {

//         cout << "Your starting investment: " << initial << "$" << endl;

//         cout << "Your current value: " << current << "$" << endl;

//         cout << "Your current profit: " << Profit() << "$" << endl;

//         cout << "Your current percent profit: " << PercentProfit() << "%" << endl;
//     }

//     int Profit()
//     {
//         return profit = current - initial;
//     }

//     int PercentProfit()
//     {
//         return percentProfit = profit / initial;
//     }

//     Investment(int init, int curr)
//     {
//         initial = init;
//         current = curr;
//         display();
//     }
// };

// class House
// {

// private:
//     string streetAddress;
//     int squareFeet;

// public:
//     House(string streetAdr, int sqFt)
//     {
//         streetAddress = streetAdr;
//         squareFeet = sqFt;
//         display();
//     }
//     void display()
//     {
//         cout << "Your street address is: " << streetAddress << endl;

//         cout << "Your current square feet dimensions: " << squareFeet << " ft^2" << endl;
//     }
// };

// class HouseThatIsAnInvestment : public Investment,
//                                 public House
// {

// public:
//     HouseThatIsAnInvestment(int, int, string, int);
//     // Display function that calls the parents classes functions
//     void display()
//     {
//         Investment::display();
//         House::display();
//     }
// };

// HouseThatIsAnInvestment::HouseThatIsAnInvestment(int init, int curr, string streetAdr, int sqFt) : Investment(init, curr), House(streetAdr, sqFt)
// {
// }

// int main(void)
// {
//     HouseThatIsAnInvestment Eliseo(250000, 900000, "Elyseo 204", 4000);
//     Eliseo.display();

//     return 0;
// }
