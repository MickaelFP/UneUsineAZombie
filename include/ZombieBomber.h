#ifndef ZOMBIEBOMBER_H
#define ZOMBIEBOMBER_H

#include "Zombie.h"

class ZombieBomber : public Zombie
{

    protected:

    private:
        float explosion = 0.0f;

    public:
        ZombieBomber();
        ZombieBomber(int a, float e);

        int getAttack() const;
        void setAttack (int a);

        int getExplosion() const;
        void setExplosion (float e);

};

#endif // ZOMBIEBOMBER_H
