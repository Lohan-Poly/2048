#include<iostream>
#include"Tuile.h"

int main() {
	Tuile tuile1;
	Tuile tuile2(2);
	std::cout << "tuile1 : " << tuile1.getValeur() << " estVide= " << tuile1.estVide() << std::endl;
	std::cout << "tuile2 : " << tuile2.getValeur() << " estVide= " << tuile2.estVide() << std::endl;
	tuile2.setValeur(8);
	std::cout << "Apres setValeur(8) : " << tuile2.getValeur() << std::endl;
	tuile2.Vider();
	std::cout << "Apres  vider() " << tuile2.getValeur() << std::endl;
	return 0;
}