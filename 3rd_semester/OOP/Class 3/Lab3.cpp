#include <iostream>

using namespace std;

/// Ex 1 ///

// int main(){
//	int number=0;
//	cout << "Enter a number: "; cin >> number;
//	if(number%2==0){
//		number=number*number;
//		cout << "The number is square: " << number;
//	}else{
//		number=number*number*number;
//		cout << "The number is cubic: " << number;
//	}
//	return 0;
// }

/// Ex 2 ///

// int main(){
//	int age=0;
//	cout << "Enter the age of the candidate: "; cin >> age;
//	if(age>=18){
//		cout << "The candidate can vote";
//	}else{
//		cout << "The candidate can't vote";
//	}
//	return 0;
// }

/// Ex 3 ///

// int main(){
//	int x=0, y=0;
//	cout << "Enter the x coordinate: "; cin >> x;
//	cout << "Enter the y coordinate: "; cin >> y;
//	if(x>=1 && y>=1){
//		cout << "The coordinate is in the first quadrant";
//	}else{
//		if(x<=-1 && y>=1){
//			cout << "The coordinate is in the second quadrant";
//		}else{
//			if(x<=-1 && y<=-1){
//				cout << "The coordinate is in the third quadrant";
//			}else{
//				if(x>=1 && y<=-1){
//					cout << "The coordinate is in the fourth quadrant";
//				}
//			}
//		}
//	}
//	return 0;
// }

/// Ex 4 ///

// int main(){
//	char letter =' ';
//	cout << "Enter a letter: "; cin >> letter;
//	if(letter=='a' or letter=='e' or letter=='i' or letter=='o' or letter=='u'){
//		cout << "The letter is a vowel";
//	}else{
//		cout << "The letter is a consonant";
//	}
//	return 0;
// }

/// Ex 5 ///

// int main(){
//	int first=0, second=0, third=0;
//	cout << "Enter the first angle: "; cin >> first;
//	cout << "Enter the second angle: "; cin >> second;
//	cout << "Enter the third angle: "; cin >> third;
//	if(first+second+third==180){
//		cout << "The triangle is valid";
//	}else{
//		cout << "The triangle is not valid";
//	}
//	return 0;
// }

/// Ex 6 ///

// int main()
// {
//     char input;
//     cout << "E"
// }

/// Ex 7 ///

// int main(){
//	int first=0, second=0, third=0;
//	cout << "Enter the first number: "; cin >> first;
//	cout << "Enter the second number: "; cin >> second;
//	cout << "Enter the third number: "; cin >> third;
//	if(first>=second && first>third){
//		cout << "The largest number is: " << first;
//	}else{
//		if(second>first && second>=third){
//			cout << "The largest number is: " << second;
//		}else{
//			if(third>=first && third>second){
//				cout << "The largest number is: " << third;
//			}
//		}
//	}
//	return 0;
// }

/// Ex 8 ///

// int main() {
//     float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
//     cout << "Enter coefficient of a: "; cin >> a;
//     cout << "Enter coefficient of b: "; cin >> b;
//     cout << "Enter coefficient of c: "; cin >> c;
//     discriminant=(b*b)-4*a*c;
//     if(discriminant>0){
//         x1 = (((b*-1) + sqrt(discriminant))) / (2*a);
//         x2 = (((b*-1) - sqrt(discriminant))) / (2*a);
//         cout << "Roots are real and different." << endl;
//         cout << "x1 = " << x1 << endl;
//         cout << "x2 = " << x2 << endl;
//     }else{
//		if(discriminant == 0) {
//         	cout << "Roots are real and same." << endl;
//         	x1 = (b*-1)/(2*a);
//         	cout << "x1 = x2 =" << x1 << endl;
//     	}else{
//         	realPart = (b*-1)/(2*a);
//         	imaginaryPart =sqrt(-discriminant)/(2*a);
//         	cout << "Roots are complex and different."  << endl;
//         	cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
//         	cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
//     	}
//	}
//     return 0;
// }

/// Ex 9 ///

// int function(int a, char b[])
// {
//     int Percentage;
//     Percentage = a;
//     if (Percentage >= 90)
//     {
//         cout << "You got an A in " << b << endl;
//     }
//     if (Percentage >= 80 && Percentage < 90)
//     {
//         cout << "You got a B in " << b << endl;
//     }
//     if (Percentage >= 70 && Percentage < 80)
//     {
//         cout << "You got a C in " << b << endl;
//     }
//     if (Percentage >= 60 && Percentage < 70)
//     {
//         cout << "You got a D in " << b << endl;
//     }
//     if (Percentage >= 40 && Percentage < 60)
//     {
//         cout << "You got an E in " << b << endl;
//     }
//     else if (Percentage < 40)
//         cout << "You got an F in " << b << endl;
// }
// int main()
// {
//     int Phy, Chem, Bio, Math, Comp;
//     cout << "Physics's Grade: ";
//     cin >> Phy;
//     cout << "Chemistry's Grade: ";
//     cin >> Chem;
//     cout << "Biology's Grade: ";
//     cin >> Bio;
//     cout << "Math's Grade: ";
//     cin >> Math;
//     cout << "Computer's Grade: ";
//     cin >> Comp;
//     function(Phy, "Physics");
//     function(Chem, "Chemistry");
//     function(Bio, "Biology");
//     function(Math, "Math");
//     function(Comp, "Computer");

//     return 0;
// }

/// Ex 10 ///

// int main()
// {
//     int KWH;
//     float bill;
//     cout << "Enter ammount of KWH consumed: ";
//     cin >> KWH;
//     if (KWH <= 50)
//     {
//         bill = KWH * 0.5;
//         if (KWH >= 50 && KWH <= 150)
//         {
//             bill += (KWH - 50) * 0.75;
//             if (KWH >= 150 && KWH <= 250)
//             {
//                 bill += (KWH - 150) * 1.2;
//                 if (KWH > 250)
//                     bill += ((KWH - 250) * 1.5) + 0.2 * bill;
//             }
//         }
//     }
//     cout << "Your bill is: " << bill << endl;

//     return 0;
// }