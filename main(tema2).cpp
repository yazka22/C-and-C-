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
void sase_luni(nod* p)
{
    cout << "Lista epidemiilor cu durata mai mare de 6 luni:" << endl;
    while (p != NULL)
    {
        if (p->.e durata_luni > 6)
        {
            cout<<p->e.denumere<<"<<p->e.tara_afectata<<""<<p->e.populatie_totala<<""p->e.populatie_afectata<<""p->e.anul_declansarii<<""<<p->e.durata_luni<<endl
        }
        p = p->urmator;
    }

}
void tara_maxim(nod* d) {
    int k = 0;
    int maximul = -1;
    string tara;
    while (p->urmator != NULL)
        {
    nod * q = p->urmator;
    k = 0;
    while (q != NULL)
    {
        if(p->e.tara_afectata==q->e.tara_afectata)
        {
            k++;
        }
    }
    if (k > maximul)
    {
        maximul = k;
        tara = p->e.tara_afectata;
    }
        }
    cout << "Tara cu numarul maxim de epidemii:" << tara;
}
void epid_active(nod* p)
{
    cout << "Epidemii active:";
    while (p != NULL)
    {
        if (p->e.anul_declansarii == 2019 && p->e.durata_luni == -1)
        {
            cout << p->e.denumere << "" << p->e.tara_afectata << ""p->e.populatie_totala << ""p->e.populatie_afectata << ""p->e.anul_declansarii << ""p->e.durata_luni << endl;
     }
   }
}
int main()
{
    numar_noduri();
    afisare_lista(prim);
    I_infest(alt);
    afisare_lista(alt);
    sase_luni(prim);
    tara_maxim(prim);
    epid_active(prim)
    return 0;
}
