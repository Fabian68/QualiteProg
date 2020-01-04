#pragma once
#include "Objet.h"
class Dechet :
	public Objet
{
public:
	Dechet();
	Dechet(int x, int y);
	int indice()const;
	void confrontation(Terrein& T);
	void estConfronter(Terrein& T);
	void seDeplacer(Terrein& T);
	~Dechet();
};

