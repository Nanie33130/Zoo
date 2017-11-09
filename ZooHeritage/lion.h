#ifndef LION
#define LION value
#include "animal.h"

class Lion: public Animal
{
private:
	int tailleCriniere;
public:
	Lion(string theName, string theBirthdate, Animal* theFather, Animal* theMother, int theTailleCriniere);
	void crier();
	void display();	
};
#endif