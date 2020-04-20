#ifndef CLASAPERECHE_H
#define CLASAPERECHE_H
#include <iostream>

using namespace std;


class ClasaPereche
{
private:
    int x,y;
public:
    ClasaPereche();
    virtual ~ClasaPereche();
    ClasaPereche(int ,int );
    ClasaPereche(const ClasaPereche &);
    int getx() const;
    int gety() const;
    const ClasaPereche& operator=(const ClasaPereche&);
    friend ostream &operator <<(ostream&,ClasaPereche&);
    friend istream& operator >>(istream&,ClasaPereche&);
    friend class Multime_pereche;

};

#endif // CLASAPERECHE_H
