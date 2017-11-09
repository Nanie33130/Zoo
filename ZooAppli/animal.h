#ifndef ANIMAL
#define ANIMAL value

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
	virtual void crier()=0;
	Animal(string theName, string theBirthdate, Animal* theFather, Animal* theMother);
	virtual ~Animal();
	void display();
	static int nbAnimals;

};
#endif