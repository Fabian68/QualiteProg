#pragma once
#include <string>

class Objet
{
public:
	Objet();
	virtual int indice()const;
	virtual void seDeplacer(void *);
	virtual void afficher()const;
	~Objet();
};

