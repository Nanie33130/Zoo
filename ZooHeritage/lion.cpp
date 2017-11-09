#include "lion.h"

Lion::Lion(string theName, string theBirthdate, Animal* theFather, Animal* theMother, int theTailleCriniere)
	:Animal(theName, theBirthdate, theFather, theMother)
{
	tailleCriniere=theTailleCriniere;
	display();
}

void Lion::crier()
{
	cout<<"Je fais Graouh "<<endl;
}

void Lion::display()
{
	
	Animal::display();
	cout<<"Hello, it’s me...\n"<<"Je suis un lion ! \n";
	crier();
	cout<<"Et ma crinière fait "<<tailleCriniere<<"cm ! \n\n";
}
