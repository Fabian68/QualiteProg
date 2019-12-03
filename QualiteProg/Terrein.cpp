#include "Terrein.h"



Terrein::Terrein(int longeur, int largeur) : _longeur{longeur},_largeur{largeur}
{
	_terrein.resize(longeur);
	for (int i = 0;i < longeur;i++) {
		_terrein[i].resize(largeur,0);
	}
}

int Terrein::longeur()const {
	return _longeur;
}

int Terrein::largeur()const {
	return _largeur;
}

int Terrein::objetALindice(int x, int y)const {
	return _terrein[x][y];
}

void Terrein::placerObjetAuxCoordonnes(int indiceObjet,int x, int y) {
	_terrein[x][y] = indiceObjet;
}
Terrein::~Terrein()
{
}
