#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Terrein.h"
#include "Joueur.h"


TEST_CASE("Le labyrinthe est correct") {
	Terrein T(10, 20);
	Joueur j;
	
	SUBCASE("Les dimensions sont correctes") {
		CHECK(T.longeur() == 10);
		CHECK(T.largeur() == 20);
	}
	SUBCASE("Le constructeur est correcte") {
		for (size_t i = 0; i <T.longeur(); i++)
		{
			for (size_t j = 0; j < T.largeur(); j++)
			{
				CHECK(T.objetALindice(i, j) == 0);
			}
		}
	}
	SUBCASE("Le placement est correct") {
		T.placerObjetAuxCoordonnes(j.indice(), 5, 6);
		CHECK(T.objetALindice(5, 6) == 1);
	}
}


