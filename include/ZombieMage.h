#ifndef ZOMBIEMAGE_H
#define ZOMBIEMAGE_H

#include "Zombie.h"

class ZombieMage : public Zombie
{
    public:
        ZombieMage();
        ZombieMage(int a, int p, bool s);

        int getPv() const;
        void setPv(int p);

        int getAttack() const;
        void setAttack(int a);

        bool getSort() const;
        void setSort(bool s);

    protected:

    private:
};

#endif // ZOMBIEMAGE_H
