#ifndef LICE_H
#define LICE_H

#include <iostream>
#include <string>
using namespace std;

class Lice
{
    public:
        Lice();
        virtual ~Lice();

        virtual void setIme(string ime);
        virtual void setPrezime(string prezime);
        virtual void setAdresa(string adresa);
        virtual void setBroj(string broj);
        virtual void Info();

        virtual string getIme() const;
        virtual string getPrezime() const;
        virtual string getAdresa() const;
        virtual string getBroj() const;

    protected:
        string ime;
        string prezime;
        string adresa;
        string broj;

    private:
};

#endif // LICE_H
