#include "ClasaPereche.h"

ClasaPereche::ClasaPereche()
{
    this->x=0;
    this->y=0;

}
ClasaPereche::ClasaPereche(int a, int b)
{
    this->x=a;
    this->y=b;

}

ClasaPereche::~ClasaPereche()
{
    this->x=0;
    this->y=0;


}
ClasaPereche::ClasaPereche(const ClasaPereche& a)
{
    this->x=a.x;
    this->y=a.y;


}
istream& operator >>(istream& input,ClasaPereche& a)
{
    if(a.x==0 && a.y==0)
    {
        int h,i;
        cout<<"introdu x ";
        input>>h;
        a.x=h;
        cout<<"introdu y ";
        input>>i;
        a.y=i;
    }
    return input;
}
ostream &operator <<(ostream& output,ClasaPereche& a)
{
    output<<"("<<a.x<<","<<a.y<<")";
    return output;
}
const ClasaPereche& ClasaPereche::operator=(const ClasaPereche& right)
{
    if(&right != this)
    {
       this->x=right.x;
       this->y=right.y;
    }
    return *this;
}
int ClasaPereche::getx() const
{
    return this->x;
}
int ClasaPereche::gety() const
{
    return this->y;
}
