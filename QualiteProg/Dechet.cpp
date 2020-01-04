#include "Dechet.h"



Dechet::Dechet()
{
}

Dechet::Dechet(int x, int y) : Objet(x,y)
{
}

int Dechet::indice() const
{
	return 40;
}

void Dechet::confrontation(Terrein& T)
{
}

void Dechet::estConfronter(Terrein& T)
{
}

void Dechet::seDeplacer(Terrein& T)
{
	//ne fait rien 
}


Dechet::~Dechet()
{
}
