#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
	string name;
	string birthdate;
	Animal* father;
	Animal* mother;
	static void displayNbAnimals();
public:
	Animal(string theName, string theBirthdate, Animal* theFather, Animal* theMother);
	~Animal();
	void display();
	static int nbAnimals;
};