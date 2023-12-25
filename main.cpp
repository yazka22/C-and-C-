#include <iostream>
#include <stdlib.h>
using namespace std;

struct epid{
  string denumere;
  string tara_afectate;
  float populatie_totala;
  float populatie_afectate;
  int anul_declansarii;
  int durata_luni;
  float inf;
};
struct nod
{
    epid e;
    nod *urmator;
};
nod *prim,*alt;

void inserare_inceput(nod *&prim,epid x)
{
    nod *nou=new nod;
        nou->e=x;
        nou->urmator=prim;
        prim=nou;
};
void numar_noduri()
{
    int n,i;
    epid x;
    cout<<"\ncare este n?";cin>>n;
    for(i=1;i<=n;i++)

    {
        cout<<"\nIntrouceti informatiile\n";
        cin>>x.denumere>>x.tara_afectata>>x.populatie_totala>>x.populatie_afectata>>x.anul declansarii>>x.durata luni;
            x.inf=(x.populatie_afectata/x.populatie_totala);
            cout<<"\nProcentul de infestare este"<<x.inf<<"\n";
            inserare_inceput(prim,x);
    }
}
void afisare_lista(nod *prim)
{ nod *p=prim;
  while(p!=NULL)
  {
      cout<<p->e.denumere<<""<<p->e.tara_afectata<<""<<p->e.populatie_totala""<<p->populatie_afectata<<""<<p->e.anul_declansarii<<""<<p->e.durata_luni<<endl;
      p=p->urmator;
  }

}
void I_infest(nod *alt)
{ epid x;
  nod *d=prim;
  x.inf=(x.populatie_afectata/x.populatie_totala);
  if(x.inf>0.05)
  {
       cout<<"\nLista epidemiilor cu procent mai mare de 5%:\n";
       inserare_inceput(alt,p->e);}
       p=p->urmator;
}
int main()
{
    numar_noduri();
    afisare_lista(prim);
    I_infest(alt);
    afisare_lista(alt);
    return 0;
}
