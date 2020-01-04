#pragma once
#include "Objet.h"
class Dechet :
	public Objet
{
public:
	Dechet();
	int indice()const;
	void confrontationAvec(Objet*);
	void estConfrontA(Objet*);
	void seDeplacer();
	~Dechet();
};

