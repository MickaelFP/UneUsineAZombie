#include "ZombieBomber.h"

ZombieBomber::ZombieBomber():Zombie()
{
    cout << " Je suis un ZombieBomber " << endl;
}

ZombieBomber::ZombieBomber():Zombie(int a, float e)
{
    cout << " Je suis un ZombieBomber " << endl;
}

int Zombie::getAttack() const;
{
    return attack;
}
void Zombie::setAttack (int a);
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
        attack = a*2;
    }
}

float Zombie:getExplosion() const
{
    return explosion;
}

void Zombie:setExplosion (float e)
{
    if (explosion > 1 || explosion < -1) {
		explosion = 0;
	}
	else {
		explosion = e;
	}
}


//int Zombie::getPv() const
