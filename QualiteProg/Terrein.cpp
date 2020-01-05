#include "Terrein.h"
#include "Objet.h"
#include<iostream>
#include <fstream>
using namespace std;

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
void Terrein::editer(char NomFichier)
{
	std::ifstream fichier;
	fichier.open("Terrein.txt");
	if (!NomFichier)
	{
		cout << "Impossible d'ouverture le fichier!" << endl;
		system("pause");
		exit(1);
	}
	
	fichier >> _longeur;
	fichier >> _largeur;

	fichier.close();
}

void Terrein::charger(char NomFichier)
{
	ifstream fichier("Terrein.txt");
	if (fichier.is_open()) {
		char file = fichier.get();
		while (fichier.good()) {
			cout << file;
			file = fichier.get();
		}
	}
	else {
		cout << "Erreur d'ouverture ";
	}
	return ;
}

void Terrein::sauvegarder(char NomFichier)
{

}
Terrein::~Terrein()
{
}
