#ifndef MLECNIPROIZVOD_H
#define MLECNIPROIZVOD_H
#include "Proizvod.h"


class MlecniProizvod : public Proizvod
{
    public:
        MlecniProizvod();
        virtual ~MlecniProizvod();

        void setPoreklo(string porekloMelka);
        string getPoreklo();

        void info(MlecniProizvod& pr){
            cout << "Ime proizvoda: " << pr.getIme() << " Cena: " << pr.getCena() << " dinara! " << "Rok trajanja je: " << pr.getRokTrajanja() << " dana!" << " Poreklo mleka: " << pr.getPoreklo() << endl;

        }

        double cenaPdv(MlecniProizvod& pr){

            double pdv = (pr.getCena()/100) * 8;

            return pr.getCena() + pdv;
        }


    protected:

    private:
        string porekloMleka;
};

#endif // MLECNIPROIZVOD_H
