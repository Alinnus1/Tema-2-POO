#ifndef COADA_PERECHE_H
#define COADA_PERECHE_H
#include <Multime_pereche.h>

using namespace std;


class Coada_pereche: public virtual Multime_pereche
{
    public:
        Coada_pereche();
        Coada_pereche(int , ClasaPereche & );
        Coada_pereche( const Coada_pereche &);
        void inserare(const ClasaPereche &);
        int getn();
        ClasaPereche inc();
        void ainc();
        void afisare();
        bool stergere ();
        virtual ~Coada_pereche();

};

#endif // COADA_PERECHE_H
