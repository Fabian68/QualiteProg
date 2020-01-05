#include "doctest.h"
#include "Terrein.h"

TEST_CASE("L'edition d'un terrain est correcte") {
	int longuer = 20;
	int larguer = 20;
	Terrein terrein{ longuer , larguer };

	SUBCASE("L'edition dans un fichier texte est correcte ") {
		terrein.editerEnTxt("Terrein.txt");
		REQUIRE_EQ(terrein.longeur(), 20);
		REQUIRE_EQ(terrein.largeur(), 20);
	}
	SUBCASE("L'edition à partir d'un flux est correcte ") {
		terrein.editerEnFlux("Terrein.txt");
		REQUIRE_EQ(terrein.longeur(), 20);
		REQUIRE_EQ(terrein.largeur(), 20);
	}
	SUBCASE("Le chargement d'un terrein est correct ") {
		terrein.charger("Terrein.txt");
		REQUIRE_EQ(terrein.longeur(), 20);
		REQUIRE_EQ(terrein.largeur(), 20);
	}
}
