#pragma once
#include <vector>
class Terrein
{
public:
	Terrein(int longeur,int largeur);
	int longeur() const;
	int largeur() const;
    int objetALindice(int x, int y) const;
	void placerObjetAuxCoordonnes(int indiceObjet, int x, int y);
	~Terrein();
private:
	int _longeur;
	int _largeur;
	std::vector<std::vector<int>> _terrein;
};

