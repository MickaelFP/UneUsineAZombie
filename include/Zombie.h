#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>

using namespace std;

class Zombie
{
    private:
        int pv = 100;
        int attack = 10;
        string nom = "GRRR";

    public:
        //CONSTRUCTEURS
        Zombie();
        Zombie(int p, int a);
        Zombie(string n);

        //DESTRUCTEUR
        ~Zombie();

        // GETTERS / SETTERS
        int getPv() const;
        void setPv(int p);

        int getAttack() const;
        void setAttack(int a);

        string getNom() const;
        void setNom(string n);

        //AFFICHE LES INFOS DU(DES) ZOMBIE(S)
        void showInfos() const;

        //ON CREER UNE FONCTION/ACTION ATTACK ZOMBIE
        void attackZombie(Zombie* cible);

};

#endif // ZOMBIE_H
