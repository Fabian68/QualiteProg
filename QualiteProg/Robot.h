#pragma once
#include "Objet.h"
class Robot :
	public Objet
{
public:
	Robot();
	int indice()const;
	void confrontationAvec(Objet*);
	void estConfrontA(Objet*);
	~Robot();
};

