#pragma once
#include "Objet.h"
class Joueur :
	public Objet
{
public:
	int indice()const;
	void confrontationAvec(Objet*);
	void estConfrontA(Objet*);
	Joueur();
	~Joueur();
};

