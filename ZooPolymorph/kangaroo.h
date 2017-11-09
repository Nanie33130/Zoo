#include "animal.h"

class Kangaroo: public Animal 
{
	public:
		void crier();
		void display();
		static void displayNbKangaroo();
		static int nbKangaroo;
		Kangaroo(string theName, string theBirthdate, Animal* theFather, Animal* theMother);
		~Kangaroo();
};