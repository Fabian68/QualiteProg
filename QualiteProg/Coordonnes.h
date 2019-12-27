#pragma once
class Coordonnes
{
public:
	Coordonnes(int LimiteX, int LimiteY);

	int x()const;
	int y()const;

	//Si une coordonnes dépasse elle est renvoyer de l'autre coté
	void incrementerX();
	void decrementerX();
	void incrementerY();
	void decrementerY();

	int limiteX()const;
	int limiteY()const;
private:
	int _x, _y;
	int _limiteX, _limiteY;
};

