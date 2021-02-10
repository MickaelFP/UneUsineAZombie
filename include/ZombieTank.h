#ifndef ZOMBIETANK_H
#define ZOMBIETANK_H

#include "Zombie.h"

class ZombieTank : public Zombie
{
    public:
        ZombieTank();
        ZombieTank(int d);

        int getArmor() const;
        void setArmor(int d);

        int getCharge() const;
        void setCharge(int c);

    protected:

    private:
        int armor = 50;
        int charge = 50;
};

#endif // ZOMBIETANK_H
