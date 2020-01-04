#pragma once
#include "Objet.h"
class Robot :
	public Objet
{
public:
	Robot();
	Robot(int x, int y);
	int indice()const;
	void confrontation(Terrein& T);
	void estConfronter(Terrein& T);
	void seDeplacer(Terrein& T);
	~Robot();
};

