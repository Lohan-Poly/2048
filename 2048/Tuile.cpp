#include "Tuile.h"
#include<stdexcept>

Tuile::Tuile(int valeur) : valeur_(valeur)
{
	if (valeur_ < 0) {
		throw std::invalid_argument("La valeur d'une tuile ne peut pas etre negative");
	}
}

int Tuile::getValeur() const
{
	return valeur_;
}

bool Tuile::estVide() const
{
	if (valeur_ == 0)
		return true;
	else
		return false;
}

void Tuile::setValeur(int valeur)
{
	if (valeur_ < 0) {
		throw std::invalid_argument("La valeur d'une tuile ne peut pas etre negative");
	}
	valeur_ = valeur;
}

void Tuile::Vider()
{
	valeur_ = 0;
}