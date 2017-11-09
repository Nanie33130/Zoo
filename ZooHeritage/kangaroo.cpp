#include "kangaroo.h"

int Kangaroo::nbKangaroo=0;

void Kangaroo::crier()
{
	cout<<"Je siffle "<<endl;
}

void Kangaroo::display()
{
	cout<<"\nJe suis un kangourou"<<endl;
	crier();
	Animal::display();
}

void Kangaroo::displayNbKangaroo()
{
	cout<<"Il y a "<<nbKangaroo<<" kangourou dans ce zoo";
}

Kangaroo::Kangaroo(string theName, string theBirthdate, Animal* theFather, Animal* theMother)
	:Animal(theName, theBirthdate, theFather, theMother)
{
	nbKangaroo++;
	display();

}

Kangaroo::~Kangaroo()
{
	nbKangaroo--;
}
