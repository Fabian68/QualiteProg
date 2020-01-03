#pragma once
#include "Coordonnes.h"
int const DROITE = 1;
	int const GAUCHE = 2;
	int const BAS = 3;
	int const HAUT = 4;
class DeplacementBasique
{
public:
	DeplacementBasique(Coordonnes & C, int direction);
	DeplacementBasique();
	~DeplacementBasique();
	
private:
	
};

