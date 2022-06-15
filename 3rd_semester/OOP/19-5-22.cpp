
// //////      ALEX VILLALBA IFE     //////
// //////  Practice class 19-5-22   //////

#include <iostream>

using namespace std;

// // 2. a. Create two classes. The first, named Sale, holds data for a sales transaction. Its private data members
// // include the day of the month, amount of the sale, and the salesperson’s ID number. The second class, named
// // Salesperson, holds data for a salesperson, and its private data members include each salesperson’s ID
// // number and last name. Each class includes a constructor to which you can pass the field values. Create a
// // friend function named display()that is a friend of both classes and displays the date of sale, the amount,
// // and the salesperson ID and name. Write a short main()demonstration program to test your classes and
// // friend function. Save the file as Sales.cpp.

// class Salesperson;

// class Sale
// {
//     friend void display(Sale, Salesperson);

// private:
//     int day;
//     float saleAmount;
//     int idNum;

// public:
//     Sale(int, float, int);
// };
// class Salesperson
// {
//     friend void display(Sale, Salesperson);

// private:
//     int idNum;
//     string lastName;

// public:
//     Salesperson(int, string);
// };
// Sale::Sale(int dom, float saleA, int idnum)
// {
//     day = dom;
//     saleAmount = saleA;
//     idNum = idnum;
// }
// Salesperson::Salesperson(int idnum, string ln)
// {
//     idNum = idnum;
//     lastName = ln;
// }

// void display(Sale sale, Salesperson salesperson) // Both classes in the paramater of the friend function
// {
//     cout << "day #" << sale.day << endl
//          << "The sale amount is: " << sale.saleAmount << "$" << endl
//          << "The salesperson id is: " << salesperson.idNum << endl
//          << "The sales person last name is: " << salesperson.lastName << endl;
// }

// int main()
// {
//     Sale sale1(30, 3.5, 3200);
//     Salesperson salesperson1(8900, "Ramirez");
//     display(sale1, salesperson1);

//     return 0;
// }

// 3. Create a class named WeatherReport that holds a daily weather report with data members such as
// dayOfMonth, highTemp, lowTemp, amountRain, and amountSnow. The constructor initializes the fields with
// default values: 99 for dayOfMonth, -9999 for highTemp, 9999 for lowTemp, and 0 for amountRain and
// amountSnow. Include a function that prompts the user and sets values for each field so that you can override
// the default values. Instantiate 30 WeatherReport objects and, in a loop, prompt the user for a month’s data.

// At the end of the month, a month-end WeatherReport object is created. Initialize the object with default
// values; then use a friend function to store the high temperature, low temperature, and rain and snow totals
// for the month in the object. The friend function takes two WeatherReport objects—the summary object
// and one day’s object—and it returns an updated summary object. If the day’s high temperature is higher than
// the summary object’s high, then replace the summary high. If the day’s low temperature is lower than the
// summary object’s low, then replace the summary low. Accumulate rain and snow in the summary object.
// Write a main()function that creates a month-end weather report from the 30 daily reports. Save the file as
// WeatherReport.cpp.

// class WeatherReport
// {
// private:
//     int dayOfMonth;
//     int highTemp;
//     int lowTemp;
//     int amountRain;
//     int amountSnow;

// public:
//     WeatherReport(int = 99, int = -9999, int = 9999, int = 0, int = 0);
//     void weatherP();
//     friend WeatherReport summarys(WeatherReport, WeatherReport);
//     void display();
// };
// WeatherReport::WeatherReport(int dm, int ht, int lt, int ar, int as)
// {
//     dayOfMonth = dm;
//     highTemp = ht;
//     lowTemp = lt;
//     amountRain = ar;
//     amountSnow = as;
// }
// void WeatherReport::weatherP()
// {
//     int dm, ht, lt, ar, as;
//     cout << endl;
//     cout << "Enter the day of the month: ";
//     cin >> dm;
//     cout << endl
//          << "Enter the max temperature: ";
//     cin >> ht;
//     cout << "Enter the lowest temperature: ";
//     cin >> lt;
//     cout << endl
//          << "Enter the amount of rain: ";
//     cin >> ar;
//     cout << endl
//          << "Enter amount of snow: ";
//     cin >> as;

//     dayOfMonth = dm;
//     highTemp = ht;
//     lowTemp = lt;
//     amountRain = ar;
//     amountSnow = as;
// }

// WeatherReport summarys(WeatherReport month, WeatherReport summary)
// {
//     if (month.highTemp > summary.highTemp)
//     {
//         summary.highTemp = month.highTemp;
//     }
//     if (month.lowTemp < summary.lowTemp)
//     {
//         summary.lowTemp = month.lowTemp;
//     }
//     summary.amountRain = summary.amountRain + month.amountRain;
//     summary.amountSnow = summary.amountSnow + month.amountSnow;

//     return summary;
// }
// void WeatherReport::display()
// {
//     cout << "The months summary is: " << endl
//          << "The highest temperature in C was: " << highTemp << endl
//          << "The lowest temperature in C was: " << lowTemp << endl
//          << "The amount of rain in ml/cm2 was: " << amountRain << "The amount of snow in cm/cm2 was: " << amountSnow;
// }

// int main()
// {
//     WeatherReport month[30];
//     WeatherReport summary;
//     for (int i = 0; i < 30; i++)
//     {
//         cout << "Enter the data for day number " << i + 1 << ":";
//         month[i].weatherP();
//         summary = summarys(summary, month[i]);
//     }

//     summary.display();

//     return 0;
// }

// 4. Complete the following tasks:
// a. Design a Job class with three data fields—Job number, time in hours to complete the Job, and per-hour rate
// charged for the Job.

// b. Include overloaded extraction and insertion operators that get and display a Job’s values.

// c. Include overloaded + and – operators that return integers that indicate the total time for two Jobs, and
// indicate the difference in time between two Jobs, respectively. Write a main()function demonstrating that all
// the functions work correctly. Save the file as Jobs.cpp.
class Job
{

    // friend ostream& operator<< (ostream&, const Job&);
private:
    int jobNumber;
    int time;
    int perHourRate;

public:
    friend ostream &operator<<(ostream &, const Job &);
    friend istream &operator>>(istream &, Job &);
    Job(int, int, int);
    int operator+(Job);
    int operator-(Job);
    void display();
};
Job::Job(int jobNum, int horario, int phr)
{
    jobNumber = jobNum;
    time = horario;
    perHourRate = phr;
}
int Job::operator+(Job job1)
{
    int totalHours;
    totalHours = time + job1.time;
    return totalHours;
}
int Job::operator-(Job job1)
{
    int difHours;
    difHours = time - job1.time;
    return difHours;
}
istream &operator>>(istream &in, Job &aJob)
{
    cout << "Enter job number: ";
    in >> aJob.jobNumber;
    cout << "Hours to complete: ";
    in >> aJob.time;
    cout << "Rate per hour: ";
    in >> aJob.perHourRate;
    return in;
}
ostream &operator<<(ostream &out, const Job &aJob)
{
    out << "Job # " << aJob.jobNumber;
    out << " " << aJob.time << " hours at $";
    out << " " << aJob.perHourRate << " per hour. " << endl;
    return out;
}

int main()
{
    Job job1(0, 0, 0), job2(0, 0, 0);
    cin >> job1;
    cin >> job2;
    int difference, sum;
    // job1.operator+(job2)
    // sum = job1+job2
    sum = job1.operator+(job2);
    difference = job1.operator-(job2);
    cout << "Between: ";
    cout << job1;
    cout << " and ";
    cout << job2;
    cout << " The difference is: " << difference << " hours. " << endl;
    cout << "The total time is: " << sum << " hours. " << endl;
    return 0;
}
