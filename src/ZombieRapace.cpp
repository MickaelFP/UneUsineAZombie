#include "ZombieRapace.h"

ZombieRapace::ZombieRapace():Zombie()
{
    cout << " Je suis un ZombieRapace " << endl;
}

ZombieRapace::ZombieRapace():Zombie(int p)
{
    cout << " Je suis un ZombieRapace " << endl;
}

int Zombie::getPv() const
{
    return Pv;
}

void Zombie::setPv (int p)
{
    if (p > 100 || p < 0)
    {
        cerr << " " << getNom() << " se décompose " << endl;
		pv = 0;
    }
    else
    {
        pv = p/2;
    }
}

int getAttack() const
{
    return attack;
}

void setAttack (int a)
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
        attack = a/2;
    }
}

int getAttackRapide() const
{
    return attackRapide;
}

void setAttackRapide(int ar)
{

}
