#include <iostream>
#include <string>

#include "Lice.h"
#include "PravnoLice.h"

#include "Proizvod.h"
#include "MlecniProizvod.h"

using namespace std;

int main()
{

    Lice* lice = new Lice();
    PravnoLice* pravnoLice = new PravnoLice();

    lice->setIme("Pera");
    lice->setPrezime("Peric");
    lice->setAdresa("Makedonska 20");
    lice->setBroj("064123456");

    lice->Info();


    pravnoLice->setIme("Marko");
    pravnoLice->setPrezime("Markovic");
    pravnoLice->setAdresa("Nemanjina 20");
    pravnoLice->setBroj("064123456");
    pravnoLice->setPIB(200);

    pravnoLice->Info();

    Proizvod* pr = new Proizvod();
    MlecniProizvod* mlecniPr = new MlecniProizvod();


    pr->setIme("Lubenica");
    pr->setCena(10);
    pr->setRokTrajanja(14);

    mlecniPr->setIme("Pavlaka");
    mlecniPr->setCena(50);
    mlecniPr->setRokTrajanja(20);
    mlecniPr->setPoreklo("domace");

    pr->info(*pr);
    mlecniPr->info(*mlecniPr);

    cout << "Cena lubenice uz pdv je: " << pr->cenaPdv(*pr) << endl;
    cout << "Cena pavlake  uz pdv je: " << mlecniPr->cenaPdv(*mlecniPr);




    delete lice;
    delete pravnoLice;
    delete pr;
    delete mlecniPr;



    return 0;
}
