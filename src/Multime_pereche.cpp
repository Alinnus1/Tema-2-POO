#include "Multime_pereche.h"

Multime_pereche::Multime_pereche()
{

    this->n=0;
}

Multime_pereche::~Multime_pereche()
{
    this->n=0;
    this->m.resize(this->n);
    this->m.shrink_to_fit();

}
Multime_pereche::Multime_pereche(int a, ClasaPereche & z)
{

    this->n=a;
    for(int i=0;i<n;i++)
        this->m.push_back(z);
}
Multime_pereche::Multime_pereche(const Multime_pereche & z)
{

    this->n=z.n;
    vector<ClasaPereche> temp;
    for (int i = 0; i <z.n ; i++)
        temp.push_back(z.m[i]);
    this->m.swap(temp);

}
const Multime_pereche& Multime_pereche::operator=(const Multime_pereche& z)
{
    this->n=z.n;
    vector<ClasaPereche> temp;
    for (int i = 0; i <z.n ; i++)
        temp.push_back(z.m[i]);
    this->m.swap(temp);


    return *this;
}
ostream &operator <<(ostream& out,Multime_pereche& z)
{
    out<<"[ ";
    for (int i=0;i<z.n;i++)
    {
        out<<z.m[i];
    }
    out<<" ]";
    return out;
}
istream& operator >>(istream& in,Multime_pereche& z)
{
    cout<<"cate perechi?";
    int h;
    in>>h;
    z.n=h;
    for(int i=0;i<z.n;i++)
    {
        ClasaPereche temp;
        in>>temp;
        (z.m).push_back(temp);
    }
}

