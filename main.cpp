#include "Zombie.h"
#include <iostream>
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

    cout << "	zombie 2  " << endl;
	Zombie z2(z1);
	z2.setPv(40);
	z2.setAttack(3);
	z2.setNom("BRRRR");
	z2.showInfos();

    z2.attackZombie(&z1);

	cout << "Attack de z2 = "<<z2.getAttack()<<endl;
	cout << "PV de z1 = "<<z1.getPv()<<endl;

	cout << endl;

    return 0;
} // FIN DU MAIN
