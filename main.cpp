#include <iostream>
#include "ZombieBomber.h"
#include "ZombieFusion.h"
#include "ZombieMage.h"
#include "ZombieRapace.h"
#include "ZombieTank.h"
//#include ""

using namespace std;

int main()
{
    srand(time(NULL));
    //cout << "Hello world!" << endl;

    Zombie z1;
    cout << "	zombie 1  " << endl;
	z1.setPv(20);
	z1.setAttack(6);
	z1.setNom("GRRRR");
	z1.showInfos();
	cout << endl;

    cout << "	zombie 2  " << endl;
	Zombie z2(z1);
	z2.setPv(40);
	z2.setAttack(3);
	z2.setNom("BRRRR");
	z2.showInfos();
	cout << endl;

    z2.attackZombie(&z1);

	cout << "Attack de z2 = "<<z2.getAttack()<<endl;
	cout << "PV de z1 = "<<z1.getPv()<<endl;
	cout << endl;

    ZombieBomber zb(10);
    zb.showInfos();
    cout << endl;

    ZombieFusion zf(20);
    zf.showInfos();
    cout << endl;

    ZombieMage zm(30);
    zm.showInfos();
    cout << endl;

    ZombieRapace zr(40);
    zr.showInfos();
    cout << endl;

    ZombieTank zt(50);
    zt.showInfos();
    cout << endl;

    return 0;
} // FIN DU MAIN
