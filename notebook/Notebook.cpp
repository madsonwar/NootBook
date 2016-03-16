#include "Notebook.h"
#include <string>
#include <iostream>
#include "Data.h"

using namespace std;
int Notebook::versaodaBios = 0;
Notebook::Notebook()
{
    ligado = false;
    programa = "Desconhecido";
    volume = 0;
}
Notebook::Notebook():dataDeFabricacao(5,10,1980)
{
    ligado = false;
    programa = "Desconhecido";
    volume = 0;
    
}

Notebook::Notebook()
{
    
    
}

Notebook::Notebook(Notebook &p)
{
    ligado = p.ligado;
    programa = p.programa;
    volume = p.volume;
    dataDeFabricacao = p.dataDeFabricacao;
}

Notebook::~Notebook()
{
}
ostream &operator<<(ostream & output,const Notebook &comp)
{
    output << "O volome do aparelho eh:" << comp.volume;
            
    return output;
    
}

void Notebook::executarPrograma(string a)
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
   
}

void Notebook::aumVol()
{
     
}

void Notebook::dimVol()
{
    
}

bool Notebook::operator== (const Notebook &c)
{
    if(ligado != c.ligado)
        return false;
    if(programa != c.programa)
        return false;
    if(volume != c.volume)
        return false;
    
}

const Notebook & Notebook::operator=(const Notebook &c)
{
    volume = c.volume;
    ligado = c.ligado;
    programa = c.programa;
    dataDeFabricacao = c.dataDeFabricacao;
    
   
    return *this;
}

bool Notebook::operator!=(const Notebook &c)
{
return !(*this==c);
}