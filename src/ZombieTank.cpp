#include "ZombieTank.h"

ZombieTank::ZombieTank():Zombie()
{
    cout << " Je suis un ZombieTank " << endl;

ZombieTank::ZombieTank():Zombie(int c, int d)
{
    cout << " Je suis un ZombieTank " << endl;
}

int Zombie::getArmor() const
{
    return armor;
}
void Zombie::setArmor(int d)
{

}

int Zombie::getCharge() const
{
    return charge;
}

void Zombie::setCharge(int c)
{

}
