#include "Coordonnes.h"
#include <algorithm>

Coordonnes::Coordonnes(int LimiteX, int LimiteY) : _limiteX{LimiteX},_limiteY{LimiteY},_x{0},_y{0}
{
}

int Coordonnes::x()const
{
	return _x;
}

int Coordonnes::y()const
{
	return _y;
}

void Coordonnes::incrementerX()
{
	_x=++_x%(_limiteX+1);
}

void Coordonnes::decrementerX()
{
	--_x;
	if (_x <0) {
		_x = _limiteX;
	}
}

void Coordonnes::incrementerY()
{
	_y = ++_y % (_limiteY + 1);
}

void Coordonnes::decrementerY()
{
	--_y;
	if (_y <0) {
		_y = _limiteY;
	}
}

int Coordonnes::limiteX() const
{
	return _limiteX;
	
}

int Coordonnes::limiteY() const
{
	return _limiteY;
}
