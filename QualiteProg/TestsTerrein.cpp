#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Terrein.h"
#include "Joueur.h"


TEST_CASE("La classe Terrein est correct") {
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
				CHECK(T.objetALindice(i, j) == nullptr);
			}
		}
	}
	SUBCASE("Le placement est correct") {
		T.placerObjetAuxCoordonnes(&j, 5, 6);
		CHECK(T.objetALindice(5, 6) != nullptr);
	}
	
	SUBCASE("detruire  une case se fait correctement  ")
    {
        int i =13;
        int j =4;
        T.ajouteCase(i,j,Object);
        T.detruireCase(i,j);
        REQUIRE_EQ(T.size(),156);

    }
}

TEST_CASE("La classe Robot et ceux qui héritent sont correct") {
	Terrein T(10, 20);
	Joueur j;
	T.placerObjetAuxCoordonnes(&j, 5, 6);
	CHECK(T.objetALindice(5, 6)->indice() == 1);
}

TEST_CASE("les déplacement dans le terrain sont correct") {
	//test avant que le joueur puisse choisir ou se déplacer par défaut se déplace a droite a chaque appel

	Terrein T(10, 20);
	Joueur j1(0,0);
	Joueur j2(3, 0);
	T.placerObjet(&j1);
	T.placerObjet(&j2);
	CHECK(T.objetALindice(0, 0)!=nullptr);
	CHECK(T.objetALindice(1, 0) == nullptr);
	CHECK(T.objetALindice(3, 0) != nullptr);
	j1.seDeplacer(T);
	CHECK(T.objetALindice(0, 0) == nullptr);
	CHECK(T.objetALindice(1, 0) != nullptr);
	CHECK(j1.coord().x() == 1);
	CHECK(j1.coord().y() == 0);
	CHECK(T.objetALindice(3, 0) != nullptr);
	j1.seDeplacer(T);
	j1.seDeplacer(T);
	SUBCASE("Les deux entites se detruisent bien sur le labyrinthe") {
		CHECK(T.objetALindice(3, 0) == nullptr);
		CHECK(T.objetALindice(2, 0) == nullptr);
	}
}


