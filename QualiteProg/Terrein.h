#pragma once
#include <vector>
class Objet;
class Terrein
{
public:
	Terrein(int longeur,int largeur);
	int longeur() const;
	int largeur() const;
    Objet* objetALindice(int x, int y) const;
	void placerObjetAuxCoordonnes(Objet* Obj, int x, int y);
	~Terrein();
private:
	int _longeur;
	int _largeur;
	std::vector<std::vector<Objet*>> _terrein;
};

