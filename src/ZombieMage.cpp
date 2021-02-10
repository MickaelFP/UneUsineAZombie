#include "ZombieMage.h"

ZombieMage::ZombieMage():Zombie()
{
    cout << " Je suis un ZombieMage " << endl;
}

ZombieMage::ZombieMage():Zombie(int p)
{
    cout << " Je suis un ZombieMage " << endl;
}

int Zombie::getPv() const
{
    return pv;
}

void Zombie::setPv(int p)
{

}

int Zombie::getAttack() const
{
    return attack;
}

void Zombie::setAttack(int a)
{

}

bool Zombie::getSort() const
{
    return sort;
}

void Zombie::setSort(bool s)
{

}
