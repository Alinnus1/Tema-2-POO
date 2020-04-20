#ifndef STIVA_PERECHE_H
#define STIVA_PERECHE_H
#include <Multime_pereche.h>
#include <vector>

using namespace std;


class Stiva_pereche:public Multime_pereche
{
    public:
        Stiva_pereche();
        Stiva_pereche(int , ClasaPereche & );
        Stiva_pereche( const Stiva_pereche &);
        void inserare(const ClasaPereche &);
        bool stergere ();
        void afisare();
        virtual ~Stiva_pereche();

};

#endif // STIVA_PERECHE_H
