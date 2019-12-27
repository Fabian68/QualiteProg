#pragma once
#include <string>
#include "Coordonnes.h"


class Objet
{
public:
	Objet();
	virtual int indice()const = 0;
	virtual void confrontationAvec(Objet*) = 0;
	virtual void estConfrontA(Objet*) = 0;
	virtual void seDeplacer(void *);
	virtual void afficher()const;
	~Objet();
private:
	Coordonnes c;
};

