#ifndef MULTIME_PERECHE_H
#define MULTIME_PERECHE_H
#include <ClasaPereche.h>
#include <vector>

using namespace std;


class Multime_pereche
{

protected:
    int n;
    vector<ClasaPereche> m;
public:
    Multime_pereche();
    Multime_pereche(int , ClasaPereche &);
    Multime_pereche( const Multime_pereche &);
    const Multime_pereche& operator=(const Multime_pereche&);
    friend ostream &operator <<(ostream&,Multime_pereche&);
    friend istream& operator >>(istream&,Multime_pereche&);

    virtual ~Multime_pereche();
    virtual void afisare()=0;
};

#endif // MULTIME_PERECHE_H
