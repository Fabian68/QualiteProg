#include "Joueur.h"
#include "DeplacementAvancer.h"

Joueur::Joueur()
{
}

int Joueur::indice() const
{
	return 1;
}

void Joueur::confrontation(Terrein& T)
{
	T.placerObjetAuxCoordonnes(nullptr, coord().x(), coord().y());
}

void Joueur::estConfronter(Terrein& T)
{
	confrontation(T);
}

void Joueur::seDeplacer(Terrein& T)
{
	Coordonnes CoordTemporaires = coord();
	Coordonnes CoordonnesFutur = coord();
	//determination direction choisit arbitrairement pour le moment
	int direction = DROITE;
	DeplacementAvancer(CoordonnesFutur, direction);
	if (T.objetALindice(CoordonnesFutur.x(), CoordonnesFutur.y()) != nullptr) {
		confrontation(T);
		T.objetALindice(CoordonnesFutur.x(), CoordonnesFutur.y())->estConfronter(T);
	}
	else {
		setCoordonnes(CoordonnesFutur);
		T.placerObjetAuxCoordonnes(this, coord().x(), coord().y());
		T.placerObjetAuxCoordonnes(nullptr, CoordTemporaires.x(), CoordTemporaires.y());
	}
	//deplacement avancer
}

Joueur::Joueur(int x, int y) : Objet(x,y)
{
}

Joueur::~Joueur()
{
}
