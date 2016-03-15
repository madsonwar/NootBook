#include "Notebook.h"
#include "Data.h"
#include <string>
#include <iostream>

using namespace std;


Notebook::Notebook()
{
    ligado = false;
    programa = "Desconhecido";
    volume = 0;
    sistOper = "Windowns";
}

Notebook::Notebook(bool onoff, string prog, int vol , string so, int d, int m, int a )
:fabrincaData( d, m, a)
{
    ligado = onoff;
    programa = prog;
    volume = vol;
    sistOper = so;
}

Notebook::Notebook(Notebook &p)
{
    ligado = p.ligado;
    programa = p.programa;
    volume = p.volume;
    sistOper = p.sistOper;
}

Notebook::~Notebook()
{
}


void Notebook::executarProgam(string a)
{   
    if( ligado )
    {
        cout << "Oprograma esta sendo executado:" << a << '\n';
    }
    else
        cout << "O aparelho estah desligado\n";
}

void Notebook::ligarDesligarAparelho()
{
    if( ligado )
    {
        ligado = false;
        cout << "O aparelho foi desligado\n";
    }
    else
    {
        ligado=true;
        cout << "O aparelho foi ligado\n";
        
    }
}

void Notebook::aumtVol()
{
    if( ligado )
    {    volume +=2;
        cout << "O volume foi aumentado:" << volume <<'\n';
    }
    else
        cout << "O aparelho estah desligado\n";
}

void Notebook::dimVol()
{
    if( ligado )
    {    volume -=2;
        cout << "O volume foi diminuido:" << volume <<'\n';
    }
    else
        cout << "O aparelho estah desligado\n";
}

ostream &operator<<(ostream & output,const Notebook &comp)
{
    output << "O sistema operacional do Aparelho eh" << comp.sistOper;
    
    return output;
    
}