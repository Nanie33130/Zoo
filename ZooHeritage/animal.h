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
protected:
	virtual void crier()=0;
public:
	Animal(string theName, string theBirthdate, Animal* theFather, Animal* theMother);
	~Animal();
	void display();
	static int nbAnimals;

};
#endif