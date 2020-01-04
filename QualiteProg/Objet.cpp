#include "Objet.h"

Objet::Objet() : c(10,10)
{
}

Objet::Objet(int x, int y) :c(Dimension,x,y)
{
}

int Objet::indice()const
{
	return 0;
}

void Objet::seDeplacer(Terrein& T)
{
}

void Objet::afficher() const
{
}


Objet::~Objet()
{
}

Coordonnes Objet::coord() const
{
	return c;
}

void Objet::setCoordonnes(Coordonnes C)
{
	c = C;
}
