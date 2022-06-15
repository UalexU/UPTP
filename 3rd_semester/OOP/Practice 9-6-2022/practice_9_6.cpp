#include <iostream>
using namespace std;
/////////////////////////////////// Ex - 1 ///////////////////////////////////
// 1. Create a base class named Rectangle that includes data members for the length and
//   width of a Rectangle, as well as functions to assign and display those values. Derive
//   a class named Block that contains an additional data member to store height, and
//   contains functions to assign and display the height. Write a main()function that
//   demonstrates the classes by instantiating and displaying the values for both a Rectangle
//   and a Block. Save the file as RectangleAndBlock.cpp.

// 2. Add a member function to the Rectangle class that computes the area of a Rectangle
//   (length multiplied by width). Add a member function to Block that has the same name, but
//   overrides the computation with a volume calculation (length by width by height). Write a
//   main()function that demonstrates the classes. Save the file as RectangleAndBlock2.cpp.

// Falta arreglar algun valor
// class Block;
// class Rectangle
// {

// private:
//     int lenght, width;

// public:
//     void setValues(int len, int wid)
//     {
//         lenght = len;
//         width = wid;
//     };

//     int areaVol()
//     {
//         int Area = lenght * width;
//         cout << "The area is: " << Area << endl;
//         return Area;
//     };
//     friend void display(Rectangle, Block);
// };

// class Block : public Rectangle
// {
// private:
//     int height;

//     // function method
// public:
//     Block();
//     void assign(int key)
//     {
//         height = key;
//     };

//     void AreaVol()
//     {
//         int Volume = (Rectangle::areaVol()) * height;
//         cout << "The volume is: " << Volume << endl;
//     };

//     friend void display(Rectangle, Block);
// };

// void display(Rectangle cuadrado, Block alt)
// {
//     cout << cuadrado.lenght << endl;
//     cout << cuadrado.width << endl;
//     cout << alt.height << endl;
// };

// int main(void)
// {
//     Rectangle Dimensiones;
//     Block altura;
//     Dimensiones.setValues(20, 30);
//     altura.assign(50);
//     display(Dimensiones, altura);
//     return 0;
// }

/////////////////////////////////// Ex - 2 ///////////////////////////////////

// 2. Create a base class named Book. Data fields include title and author; functions include those that
// can set and display the fields. Derive two classes from the Book class: Fiction, which also contains
// a numeric grade reading level, and NonFiction, which contains a variable to hold the number of
// pages. The functions that set and display data field values for the subclasses should call the
// appropriate parent class functions to set and display the common fields, and include specific code
// pertaining to the new subclass fields. Write a main()func- tion that demonstrates the use of the
// classes and their functions. Save the file as Books.cpp.

class Book
{
private:
    string title, author;

public:
    void setValue(string t, string a)
    {
        title = t;
        author = a;
    };
    void display()
    {
        cout << "The title is: " << title << endl;
        cout << "The author is: " << author << endl;
    };
};

class Fiction : public Book
{

private:
    int readLvl;

public:
    void setValue(string t, string a, int r)
    {
        Book::setValue(t, a);
        readLvl = r;
    };

    void display()
    {
        Book::display();
        cout << "The reading level needes is: " << readLvl << endl
             << endl;
    };
};

class NonFiction : public Book
{

private:
    int numPages;

public:
    void setValue(string t, string a, int n)
    {
        Book::setValue(t, a);
        numPages = n;
    };

    void display()
    {
        Book::display();
        cout << "The number of pages is: " << numPages << endl
             << endl;
    };
};

int main(void)
{
    Book Rayo;
    Fiction Divinidades;
    NonFiction Niebla_de_lagrimas;
    Rayo.setValue("Terminator", "Steven");
    Rayo.display();
    Divinidades.setValue("Divinidades", "Arthur Moth", 9);
    Divinidades.display();
    Niebla_de_lagrimas.setValue(" Niebla de lagrimas", "Arthur Moth", 358);
    Niebla_de_lagrimas.display();
}

/////////////////////////////////// Ex - 3 ///////////////////////////////////

// 3. Create a class named MusicalComposition that contains fields for title, composer, and year written.
// Include a constructor that requires all three values and an appropriate display function. The child
// class NationalAnthem contains an additional field that holds the name of the anthem’s nation. The
// child class constructor requires a value for this additional field. The child class also contains a
// display function. Write a main()function that instantiates objects of each class and demonstrates
// that the functions work correctly. Save the file as Compositions.cpp.
class MusicalComposition
{
private:
    string title, composer;
    int year;

public:
    MusicalComposition(string tit, string com, int yr)
    {
        title = tit;
        composer = com;
        year = yr;
    }
    friend void display(MusicalComposition Mcom, NationalAnthem Nant)
    {
        cout << "The title is: " << Mcom.title << endl;
        cout << "The composer is: " << Mcom.composer << endl;
        cout << "The year is: " << Mcom.year << endl;
    }
};

class NationalAnthem : public MusicalComposition
{
private:
    int name;

public:
    NationalAnthem(int);
    friend void display(MusicalComposition Mcom, NationalAnthem Nant)
    {
        cout << "The national anthem's name is: " << Nant.name << endl;
    }
};

int main(void)
{
    MusicalComposition Bacht("Sonata 32 in A major", "Johann sebastian bach", 1742);
    NationalAnthem Fall("Irium");

    Bacht.display();

    return 0;
}