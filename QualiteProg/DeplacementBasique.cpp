#include "DeplacementBasique.h"



DeplacementBasique::DeplacementBasique(Coordonnes & C, int direction)
{
	switch (direction)
	{
	case DROITE:
		C.incrementerX();
		break;
	case GAUCHE:
		C.decrementerX();
		break;
	case HAUT:
		C.incrementerY();
		break;
	case BAS:
		C.decrementerY();
		break;
	}
}

DeplacementBasique::DeplacementBasique()
{
}


DeplacementBasique::~DeplacementBasique()
{
}
