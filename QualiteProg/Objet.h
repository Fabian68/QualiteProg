#pragma once
#include <string>
#include "Coordonnes.h"
#include "Terrein.h"


class Objet
{
public:
	Objet();
	Objet(int x, int y);
	virtual int indice()const = 0;
	virtual void confrontation(Terrein& T) = 0;
	virtual void estConfronter(Terrein& T) = 0;
	virtual void seDeplacer(Terrein & T)=0;
	virtual void afficher()const;
	~Objet();
	Coordonnes coord()const;
	void setCoordonnes(Coordonnes C);
private:
	Coordonnes c;
};

