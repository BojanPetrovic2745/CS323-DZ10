#include "Lice.h"
#include <iostream>
#include <string>
using namespace std;

Lice::Lice()
{
    //ctor
}

Lice::~Lice()
{
    //dtor
}

void Lice::setIme(string ime){
    this->ime = ime;
}

string Lice::getIme() const{
    return ime;
}

void Lice::setPrezime(string prezime){
    this->prezime = prezime;
}

string Lice::getPrezime() const{
    return prezime;
}


void Lice::setAdresa(string adresa){
    this->adresa = adresa;
}

string Lice::getAdresa() const{
    return adresa;
}

void Lice::setBroj(string broj){
    this->broj=broj;
}

string Lice::getBroj() const{
    return broj;
}

void Lice::Info(){

    cout << "Broj telefona je: " << broj << endl;

}



