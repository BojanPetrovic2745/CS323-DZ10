#ifndef PRAVNOLICE_H
#define PRAVNOLICE_H
#include <iostream>
#include "Lice.h"

using namespace std;

class PravnoLice : public Lice
{
    public:
        PravnoLice();
        virtual ~PravnoLice();
        virtual void setPIB(int PIB);
        virtual int getPIB() const;
        void Info(){
            cout << ime << " " << prezime  << " " << adresa  << " " << broj << " " << PravnoLice::getPIB() << endl;
        }

    protected:

    private:
        int PIB;
};

#endif // PRAVNOLICE_H
