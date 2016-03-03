#include "Notebook.h"
#include <string>
#include <iostream>
using namespace std;
Notebook::Notebook()
{
    ligado = false;
    programa = "Desconhecido";
    volume = 0;
}

Notebook::~Notebook()
{
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

void Notebook::aumVol()
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