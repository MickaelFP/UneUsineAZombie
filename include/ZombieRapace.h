#ifndef ZOMBIERAPACE_H
#define ZOMBIERAPACE_H

#include "Zombie.h"

class ZombieRapace : public Zombie
{
    public:
        ZombieRapace();
        ZombieRapace(int p, int a, int ar);

        int getPv() const;
        void setPv (int p);

        int getAttack() const;
        void setAttack (int a);

        int getAttackRapide() const;
        void setAttackRapide(int ar);

    protected:

    private:
        int attackRapide = 5;
};

#endif // ZOMBIERAPACE_H

/*

- Plus agile mais plus faible physiquement, ce zombie n�a que la moiti� des points de vie et de l�attaque d�un zombie de base.
- Il poss�de une attaque rapide qui fait la moiti� des d�g�ts d�une attaque normale mais permet au zombie de se soigner de ce montant.


*/
