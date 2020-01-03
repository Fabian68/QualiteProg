#include "DeplacementAvancer.h"



DeplacementAvancer::DeplacementAvancer(Coordonnes& C, int direction)
{
	DeplacementBasique(C, direction);
	switch (direction)
	{
	case HAUTDROITE:
		C.incrementerX();
		C.incrementerY();
		break;
	case HAUTGAUCHE:
		C.decrementerX();
		C.incrementerY();
		break;
	case BASGAUCHE:
		C.decrementerY();
		C.decrementerX();
		break;
	case BASDROITE:
		C.decrementerY();
		C.incrementerX();
		break;
	}
}


DeplacementAvancer::~DeplacementAvancer()
{
}
