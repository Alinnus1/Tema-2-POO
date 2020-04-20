#include "Stiva_pereche.h"

Stiva_pereche::Stiva_pereche():Multime_pereche()
{

}
Stiva_pereche::Stiva_pereche(int a, ClasaPereche &z):Multime_pereche(a,z)
{

}
Stiva_pereche::Stiva_pereche(const Stiva_pereche &z):Multime_pereche(z)
{

}
Stiva_pereche::~Stiva_pereche()
{

}
void Stiva_pereche::inserare(const ClasaPereche &z)
{
    this->n++;
    this->m.push_back(z);
}


bool Stiva_pereche::stergere()
{
    if(this->n==0)
        return 0;
    this->n--;
    this->m.erase(this->m.end());
    return 1;
}
void Stiva_pereche::afisare()
{
    cout<<*this;
}
