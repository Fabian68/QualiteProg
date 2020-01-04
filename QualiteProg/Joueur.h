#pragma once
#include "Objet.h"

class Joueur :
	public Objet
{
public:
	int indice()const;
	void confrontation(Terrein& T);
	void estConfronter(Terrein& T);
	void seDeplacer(Terrein& T);
	Joueur(int x, int y);
	Joueur();
	~Joueur();
};

