/*
Date: 6-30-22
Name: Alex Villalba
*/
#include <iostream>
using namespace std;

/*1. Create a function template named average(). It accepts two arguments of the same type
and computes their arithmetic average. The average is returned as a double.*/
double Average(double a, double b){
    double average = (a + b) / 2; 
    return average; 
}
/*2. Overload the average()function to work correctly with three arguments.*/
double Average(double a, double b, double c){
    double average = (a + b + c) / 3;
    return average; 
}
/*3. Create a class named CollegeCourse with fields for the course ID (for example, ‘ENG 101’), your grade (for
example, ‘A’), and the credits earned for the CollegeCourse (for example, 3). The CollegeCourse constructor
accepts values for these fields as arguments, and calculates a fourth field named honorPoints. Calculate
honorPoints as the product of the grade points(4 for an A, 3 for a B, 2 for a C, and 1 for a D)and the credits.
Overload the + operator so that honor points for courses can be summed to create a summary
CollegeCourse object. Overload the / operator so that a CollegeCourse object’s honorPoints can be
divided by an integer. Overload the &lt;&lt; operator to display the details of a CollegeCourse.*/

class CollegeCourse{
    private:
    string courseID;
    char grade; 
    int credits; 
    double honorPoints;
    public:
    CollegeCourse(string id, char grd, int cts){
        courseID = id; 
        grade = grd;
        credits = cts; 
        switch(grade)
        {
        case 'A':
            honorPoints = credits * 4; 
            break;

        case 'B':
            honorPoints = credits * 3; 
            break;

        case 'C':
            honorPoints = credits * 2; 
            break;

        case 'D':
            honorPoints = credits * 1; 
            break;

        default:
            cout << "Please input a valid grade (A, B, C, D)" << endl;
            break;
        }

    }


    CollegeCourse operator+(CollegeCourse const obj1){
            CollegeCourse newCourse(obj1);
            newCourse.courseID = this->courseID + " + " + obj1.courseID;
	        newCourse.credits = this->credits + obj1.credits;
            newCourse.honorPoints = this->honorPoints + obj1.honorPoints; 
            return newCourse; 
        }

    CollegeCourse operator/(CollegeCourse const obj1){
            CollegeCourse newCourse(obj1);
            newCourse.courseID = this->courseID + " + " + obj1.courseID;
	        newCourse.credits = this->credits / obj1.credits;
            newCourse.honorPoints = this->honorPoints / obj1.honorPoints; 
            return newCourse; 
        }

    void display(){
        cout << "The course ID is: " << courseID << endl;
        cout << "The grade score is: " << grade << endl; 
        cout << "The credits are: " << credits << endl;
        cout << "The honor points are: " << honorPoints << endl;
    }

    
};
/*d. Write a main()function that declares several integers, doubles, and CollegeCourses, and demonstrates that both
versions of average()work correctly with different arguments. Save the file as Averages.cpp.*/

int main(void){
    CollegeCourse Math("Math 162", 'A', 10);
    CollegeCourse Science("Science 202", 'B', 10);
    CollegeCourse Summary = Math + Science; 
    Summary.display(); 
    Summary = Math / Science; 
    Summary.display(); 
    int n0 = 1, n1 = 2, n2 = 3;
    double d0 = 2.5, d1 = 3.5, d2 = 4.5; 
    cout<< "The average one is: " << Average(n0,d0,d1) << endl;
    cout<< "The average two is: " << Average(d2,n0,n2) << endl;

    return 0;
}
/*6. Create a class template for a class that holds an object and the number of data elements in the object.
For example, if an Employee class has two data elements, an ID number and a salary, then the class
template holds the number 2 and an Employee object; if a Student class contains 12 data elements, then
the class template holds 12 and a Student. Code a standard input function for the object that displays
a message on the screen— “You will be asked to enter X items”—where X is the number of data
elements. Write a main()function that tests your template class with an integer and two programmer-
designed classes. Save the file as NumberOfFields.cpp.*/

class Template{
    int dataElement;
    

};



/*EXTRA
8. Using the Array class in Figure 11-24, add functions that perform the following tasks:
» displays the last element in an array
» displays an element in a specified position in an array (the argument specifies the position)
» reverses the order of elements in an array
» sorts the elements in an array in ascending order » sorts the elements in an array in
descending order » sums the elements in an array
(As a starting point, you can copy the Array class code from the figure, or, more conveniently, open the file
named CodeForFig11-24.cpp in the Chapter 11 folder provided with the Data Files for this book.)

Create at least two programmer-defined classes that you can use with the container class. Write a
main()function that demonstrates your container class works with at least two built-in types and two
programmer-defined types. Save the file as ArrayContainer.cpp.*/