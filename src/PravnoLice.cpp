#include "PravnoLice.h"

PravnoLice::PravnoLice()
{
    //ctor
}

PravnoLice::~PravnoLice()
{
    //dtor
}

void PravnoLice::setPIB(int PIB){
    this->PIB = PIB;
}

int PravnoLice::getPIB() const{
    return PIB;

}
