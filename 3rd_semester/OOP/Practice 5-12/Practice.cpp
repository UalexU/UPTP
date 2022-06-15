#include <iostream>

using namespace std;

class MyClass
{
private:
    int data;

public:
    MyClass(int num); // This is the constructor with the same name as the class, its called whenever the class is called.
    // MyClass(int 10) // This will create a default value for the int value data whenever we call the class MyClass withut any argument
    void display(); // We create display function to show the out of our values
};

MyClass::MyClass(int num)
{
    data = num;                     // Modify the data value of the class with the parameter we receive
    cout << "Constructing" << endl; // This is going to be called whenever we call any object of the class
};

void MyClass::display()
{
    cout << data << endl;
};

int main()
{
    // MyClass math[2]; // This instantiates a 2 size array of objects
    MyClass number;
}