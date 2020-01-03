#pragma once
#include "DeplacementBasique.h"
	int const HAUTDROITE = 5;
	int const HAUTGAUCHE = 6;
	int const BASDROITE = 7;
	int const BASGAUCHE = 8;
class DeplacementAvancer :
	public DeplacementBasique
{
public:
	DeplacementAvancer(Coordonnes & C,int direction);
	~DeplacementAvancer();
	
private:
	
};

