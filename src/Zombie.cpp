#include "Zombie.h"

Zombie::Zombie()
{
    pv = 100;
    attack = 0;
    nom = "Default";
}

Zombie::Zombie(int p,int a)
{
    pv = p;
    attack = a;
}

Zombie::Zombie(string n)
{
    nom = n;
}

Zombie::~Zombie()
{
    cout<<"  " << getNom() << " a ete detruit "<<endl;
}

// DEBUT DES GETTERS / SETTERS DEF
int Zombie::getPv() const
{
    return pv;
}

void Zombie::setPv(int p)
{
    if (p > 100 || p < 0)
    {
        cerr << " " << getNom() << " se décompose " << endl;
		pv = 0;
    }
    else
    {
        pv = p;
    }
}

int Zombie::getAttack() const
{
    return attack;
}

void Zombie::setAttack(int a)
{
    if (a > 10)
    {
        cerr << " " << getNom() << " se décompose " << endl;
		setPv(0);
    }
    else if (a < 0)
    {
        attack = 0;
    }
    else
    {
        attack = a;
    }

}

string Zombie::getNom() const
{
    return nom;
}

void Zombie::setNom(string n)
{
    nom = n;
}
// FIN DES GETTERS / SETTERS DEF

// ON DEFINI LA FONCTION attackZombie. On cible le zombie attaqué et on initialise ses nouveaux pv (avec pointeurs), en fonction de l'attack du zombie attaquant
void Zombie::attackZombie(Zombie* cible)
{
    cible->setPv(cible->getPv() - getAttack());
}

void Zombie::showInfos() const
{
    cout << " pv : " << getPv() << endl;
    cout << " attack : " << getAttack() << endl;
    cout << " nom : " << getNom() << endl;
}

