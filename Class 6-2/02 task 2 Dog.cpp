/** OOP - 2022/05/02
 * @student:            Jaime David Colman Fleitas, IFE
 * @topic:              Practice 02 
 * @profesor:           David, Kuang-Hui Yu
 * @teacherasistand:    Horacio Sosa
 */
#include <iostream>
#include <stdlib.h> // for rand
#include <time.h> // for rand 
using namespace std;
// Class declarations.
class Dog{
    string breed;
    string eyesColor;
	friend istream &operator>>(istream &in, Dog &dog);
	friend ostream& operator<<(ostream &out, const Dog &dog);

	public:
		 //Overloading * operator
		Dog operator* (Dog dog2){
            Dog puppie;
            if (breed == dog2.breed)
                puppie.breed = breed;
            else 
                puppie.breed = "mixed";

            // random number
            srand(time(NULL));

            if ((rand() % 2) == 0) // sale 1 o sa 0
                puppie.eyesColor = eyesColor;
            else
                puppie.eyesColor = dog2.eyesColor;

            return puppie;
		}
};


//overloading input (extraction>>)
istream &operator>>(istream &in, Dog &dog){
	cout << "Enter breed type: ";
	in >> dog.breed;
	cout << "Enter eyes color: ";
	in >> dog.eyesColor;
	return in;
}

// OverLoading output (insertion <<)
ostream& operator<<(ostream &out, const Dog &dog){
	out << "  * Breed: " << dog.breed << endl;
	out << "  * Eyes number color: " << dog.eyesColor << endl;
	return out;
}


int main (void){
	cout << "Task 01: " << endl;
    Dog momDog, dadDog, puppie;
	
	cout << endl;
	cout << "First dog: " << endl;
    cin >> momDog;

	cout << endl;
	cout << "Second dog: " << endl;
    cin >> dadDog;

    cout << endl;
    cout << "Dogs informations: " << endl;
    cout << "Dog mom: " << endl;
    cout << momDog;
    cout << "Dog dad: " << endl;
    cout << dadDog;

    // calcular los rasgos del bcachoro
    puppie = momDog * dadDog;
    cout << "Puppie: " << endl;
    cout << puppie;

	return 0;
}
