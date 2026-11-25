#ifndef TUILE_H
#define TUILE_H
class Tuile
{
	private:
		int valeur_;
	public:
		Tuile(int valeur = 0);
		int getValeur() const;
		bool estVide() const;
		void setValeur(int valeur);
		void Vider();
};

#endif