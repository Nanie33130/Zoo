#include "animal.h"
int Animal::nbAnimals=0;
Animal::Animal(string theName, string theBirthdate, Animal* theFather, Animal* theMother)
{
	displayNbAnimals();
	name=theName;
	birthdate=theBirthdate;
	father=theFather;
	mother=theMother;
	nbAnimals++;
	display();
	displayNbAnimals();
}

Animal::~Animal()
{
	nbAnimals--;
}

void Animal::displayNbAnimals()
{
	if (nbAnimals<=1)
	{
		cout<<"Il y a "<<nbAnimals<<" animal dans le zoo"<<endl;
	}
	else
		cout<<"Il y a "<<nbAnimals<<" animaux dans le zoo"<<endl;
}

void Animal::display()
{
		cout<<"Nom : "<<name<<endl
		<<"Date de naissance : "<<birthdate<<endl
		<<"Nom du père : "<<father<<endl
		<<"Nom de la mère : "<<mother<<endl;
}
