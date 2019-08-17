#include "MlecniProizvod.h"

MlecniProizvod::MlecniProizvod()
{
    //ctor
}

MlecniProizvod::~MlecniProizvod()
{
    //dtor
}


void MlecniProizvod::setPoreklo(string porekloMleka){
    this->porekloMleka = porekloMleka;
}

string MlecniProizvod::getPoreklo(){
    return porekloMleka;
}
