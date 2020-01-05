#pragma once
#include <vector>
class Objet;
const int Dimension = 20;
class Terrein
{
public:
	Terrein(int longeur,int largeur);
	Terrein();
	int longeur() const;
	int largeur() const;
    Objet* objetALindice(int x, int y) const;
	void placerObjetAuxCoordonnes(Objet* Obj, int x, int y);
	void placerObjet(Objet* obj);
	void editer(char NomFichier);
	void sauvegarder(char NomFichier);
	void charger(char NomFichier);

	~Terrein();
private:
	int _longeur;
	int _largeur;
	std::vector<std::vector<Objet*>> _terrein;
};

