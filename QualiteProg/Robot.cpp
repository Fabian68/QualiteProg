#include "Robot.h"
#include "DeplacementBasique.h"


Robot::Robot()
{
}

Robot::Robot(int x, int y) : Objet(x ,y)
{
}

int Robot::indice() const
{
	return 2;
}

void Robot::confrontation(Terrein& T)
{
	T.placerObjetAuxCoordonnes(nullptr, coord().x(), coord().y());
}

void Robot::estConfronter(Terrein& T)
{
	confrontation(T);
}

void Robot::seDeplacer(Terrein& T)
{
	//determination direction
	//deplacement basique
	Coordonnes CoordTemporaires = coord();
	Coordonnes CoordonnesFutur = coord();
	//determination direction choisit arbitrairement pour le moment devra provenir d'un calcul
	int direction = 0;
	DeplacementBasique(CoordonnesFutur, direction);
	if (T.objetALindice(CoordonnesFutur.x(), CoordonnesFutur.y()) != nullptr) {
		confrontation(T);
		T.objetALindice(CoordonnesFutur.x(), CoordonnesFutur.y())->estConfronter(T);
	}
	else {
		setCoordonnes(CoordonnesFutur);
		T.placerObjetAuxCoordonnes(this, coord().x(), coord().y());
		T.placerObjetAuxCoordonnes(nullptr, CoordTemporaires.x(), CoordTemporaires.y());
	}
}




Robot::~Robot()
{
}
