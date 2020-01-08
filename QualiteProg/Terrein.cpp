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

void Terrein::ajouterCoordonnes(int x,int y,Objet* Obj){
        d_terrain[x][y]= Obj;
}

Objet* Terrein::recupererCoordonnes(int x,int y){
        return d_terrain[x][y];
} 

void Terrein::placerObjet(Objet* obj)
{	
	_terrein[obj->coord().x()][obj->coord().y()] = obj;
}
void Terrein::editerEnTxt(string& NomFichier)
{
	ofstream fichier;
	fichier.open(NomFichier.c_str());
	if (!fichier)
	{
		cout << "Impossible d'ouverture le fichier!" << endl;
		system("pause");
		exit(1);
	}
	
	fichier << _longeur;
	fichier << "\n";
	fichier << _largeur;

	fichier.close();
}
void Terrein::editerEnFlux(string& NomFichier)
{
	NomFichier = (""); // le chemin d'acces à ce fichier
	ofstream monFlux(NomFichier.c_str());
	if (monFlux)
	{
		editerEnTxt(NomFichier);
	}
	else
	{
		cout << "Impossible d'ouverture le fichier!";
	}
}
void Terrein::charger(string& NomFichier)
{
	ifstream fichier(NomFichier.c_str());
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

void Terrein::sauvegarder(string& NomFichier)
{
	ofstream fichier(NomFichier.c_str());
	if (!fichier) 
	if(Dimension > 20){
		cout << "sauvegarde impossible !";
	}
	fichier.write((char*)this, sizeof(*this));
	fichier.close();
}
Terrein::~Terrein()
{
}
