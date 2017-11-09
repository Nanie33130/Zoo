#include "lion.h"
#include "kangaroo.h"
#include <vector>

int main()
{
	vector <Animal *> vectMesAnimaux;

	vectMesAnimaux.push_back(new Lion("Simba","05/03/1999",NULL,NULL,30));
	vectMesAnimaux.push_back(new Lion("Nala","05/03/1999",NULL,NULL,0));
	vectMesAnimaux.push_back(new Kangaroo("Petit Gourou","15/10/1926",NULL,NULL));
	vectMesAnimaux.push_back(new Kangaroo("GourouJunior","12/09/1960",NULL,NULL));
	int nbAnimaux=Animal::nbAnimals;
	for (int noAnim=0; noAnim<nbAnimaux; noAnim++)
	{
		cout<<"Nombre d'animaux dans le zoo : "<<noAnim<<endl;
		vectMesAnimaux[noAnim]->display();
		vectMesAnimaux[noAnim]->crier();
		cout<<endl;
	}
	for (int noAnim=0; noAnim<nbAnimaux; noAnim++)
	{
		
		delete vectMesAnimaux[noAnim];
	}
}