#ifndef LION
#define LION value
#include "animal.h"

class Lion: public Animal
{
private:
	int tailleCriniere;
public:
	static int nbLion;
	Lion(string theName, string theBirthdate, Animal* theFather, Animal* theMother, int theTailleCriniere);
	~Lion();
	void crier();
	void display();	
};
#endif