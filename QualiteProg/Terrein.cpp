#include "Terrein.h"
#include "Objet.h"


Terrein::Terrein(int longeur, int largeur) : _longeur{longeur},_largeur{largeur}
{
	_terrein.resize(longeur);
	for (int i = 0;i < longeur;i++) {
		_terrein[i].resize(largeur,nullptr);
	}
}

Terrein::Terrein() : _longeur{Dimension},_largeur{Dimension}
{
}

int Terrein::longeur()const {
	return _longeur;
}

int Terrein::largeur()const {
	return _largeur;
}

Objet* Terrein::objetALindice(int x, int y)const {
	return _terrein[x][y];
}

void Terrein::placerObjetAuxCoordonnes(Objet* Obj,int x, int y) {
	_terrein[x][y] = Obj;
}
void Terrein::placerObjet(Objet* obj)
{	
	_terrein[obj->coord().x()][obj->coord().y()] = obj;
}
Terrein::~Terrein()
{
}
