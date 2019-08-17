#include "Proizvod.h"

Proizvod::Proizvod()
{
    //ctor
}

Proizvod::~Proizvod()
{
    //dtor
}

void Proizvod::setIme(string ime){
    this->ime = ime;
}

string Proizvod::getIme(){
    return ime;
}

void Proizvod::setCena( double cena){
    this->cena = cena;
}

double Proizvod::getCena(){
    return cena;
}

void Proizvod::setRokTrajanja(int rokTrajanja){
    this->rokTrajanja = rokTrajanja;
}

int Proizvod::getRokTrajanja(){
    return rokTrajanja;
}

void Proizvod::info(Proizvod& pr){
    cout << "Ime proizvoda: " << pr.getIme() << " Cena: " << pr.getCena() << " dinara! " << "Rok trajanja je: " << pr.getRokTrajanja() << " dana!" << endl;
}

double Proizvod::cenaPdv(Proizvod& pr){

    double pdv = (pr.getCena()/100) * 20;

    return pr.getCena() + pdv;
}
