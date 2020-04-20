#include "Coada_pereche.h"

Coada_pereche::Coada_pereche():Multime_pereche()
{

}
Coada_pereche::Coada_pereche(int a, ClasaPereche &z):Multime_pereche(a,z)
{

}
Coada_pereche::Coada_pereche(const  Coada_pereche&z):Multime_pereche(z)
{

}
Coada_pereche::~Coada_pereche()
{

}
void Coada_pereche::inserare(const ClasaPereche &z)
{
    this->n++;
    this->m.push_back(z);
}


bool Coada_pereche::stergere()
{
    if(this->n==0)
        return 0;
    this->n--;
    this->m.erase(this->m.begin());
    return 1;
}
int Coada_pereche::getn()
{
    return this->n;
}
ClasaPereche Coada_pereche::inc()
{
    return m[0];
}
void Coada_pereche::ainc()
{
    cout<<m[0]<<endl;
}
void Coada_pereche::afisare()
{
    cout<<*this;
}
