#include <iostream>
#include <ClasaPereche.h>
#include <Multime_pereche.h>
#include <Stiva_pereche.h>
#include <Coada_pereche.h>
#include <typeinfo>
#include <string>

using namespace std;

Coada_pereche q1;
Coada_pereche q2;
int dim_stiv=0;
void push(ClasaPereche & x)
{
    dim_stiv++;
    q2.inserare(x);
    cout<<q1<<endl;
    cout<<q2<<endl<<"haha";
    while(q1.getn()){
        q2.inserare(q1.inc());
        q1.stergere();
    }

    Coada_pereche temp = q1;
    q1=q2;
    q2=temp;
    cout<<q1<<endl;
    cout<<q2<<endl;
}
void pop()
{
    if(!q1.getn())
        return;
    q1.stergere();
    dim_stiv--;
}


int main()
{
    unsigned as;
    cin>>as;
    cout<<as;
    int bs=3;
    try{
        if(typeid(as).name()!= "int")
            throw(as);
        if(typeid(bs).name()!= "int")
            throw(bs);
        ClasaPereche L (as,bs);
        cout<<L;
    }
    catch(double n)
    {
        cout<<"nu pot crea pereche pt ca am un double";
    }
    catch(float n)
    {
        cout<<"nu pot crea pereche pt ca am un float";
    }
    catch(char n)
    {
        cout<<"nu pot crea pereche pt ca am un char";
    }
    catch(string n)
    {
        cout<<"nu pot crea pereche pt ca am un string";
    }
    catch(...)
    {
        cout<<"nuj ce vrei sa faci da nu e bine de loc";
    }






/*
    ClasaPereche P(1,2);
    cout<<P;
    Coada_pereche a(3,P);
    cout<<a;
    Coada_pereche b(a);
    b.afisare();


    ClasaPereche a(2,2);
    ClasaPereche b(33,3);
    ClasaPereche c(4,40);

    push(a);

    push(b);

    push(c);

    pop();
    cout<<q1<<endl;
    cout<<dim_stiv;
*/
    return 0;
}
