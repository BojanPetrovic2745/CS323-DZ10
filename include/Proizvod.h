#ifndef PROIZVOD_H
#define PROIZVOD_H

#include <iostream>
using namespace std;

class Proizvod
{
    public:
        Proizvod();
        virtual ~Proizvod();


        void setIme(string ime);
        string  getIme();


        void setCena(double cena);
        double getCena();

        void setRokTrajanja(int rokTrajanja);
        int getRokTrajanja();

        void info(Proizvod& pr);

        double cenaPdv(Proizvod& pr);

    protected:
        string ime;
        double cena;
        int rokTrajanja;

    private:
};

#endif // PROIZVOD_H
