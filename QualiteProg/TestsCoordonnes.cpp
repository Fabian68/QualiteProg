#include "doctest.h"
#include "Coordonnes.h"

TEST_CASE("La classe coordonnes est correct") {
	Coordonnes C(3, 3);

	SUBCASE("Le constructeur est correct") {
		REQUIRE_EQ(C.x(), 0);
		REQUIRE_EQ(C.y(), 0);
		REQUIRE_EQ(C.limiteX(), 3);
		REQUIRE_EQ(C.limiteY(), 3);
	}

	SUBCASE("La decrementation est correct") {
		C.decrementerX();
		C.decrementerY();
		SUBCASE("Le debordement est correct"){
			REQUIRE_EQ(C.x(), 3);
			REQUIRE_EQ(C.y(), 3);
		}
		C.decrementerX();
		C.decrementerY();
		REQUIRE_EQ(C.x(), 2);
		REQUIRE_EQ(C.y(), 2);
	}

	SUBCASE("L'incrementation fonctionne") {
		C.incrementerX();
		C.incrementerY();
		REQUIRE_EQ(C.x(), 1);
		REQUIRE_EQ(C.y(), 1);

		C.incrementerX();
		C.incrementerY();
		C.incrementerX();
		C.incrementerY();
		C.incrementerX();
		C.incrementerY();
		SUBCASE("Le debordement est correct") {
			REQUIRE_EQ(C.x(), 0);
			REQUIRE_EQ(C.y(), 0);
		}
	}
}