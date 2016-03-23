#include "Computador.h"
#include "Device.h"

#include <string>
#include <iostream>
using namespace std;
Computador::Computador():Device(1,5,1220),dataatual()
{
    sistemaOperacional = "Desconhecido";
    programa = "Desconhecido";
    
    
}

Computador::Computador(const Computador &comp):Device(static_cast<Device>(comp))

{
    sistemaOperacional = comp.sistemaOperacional;
    programa = comp.programa;
    dataatual = comp.dataatual;
    
}   

Computador::~Computador()
{
}

/*
void Computador::aumVol()
{
    
}

void Computador::dimVol()
{
    
}

void Computador::printfMarca()
{
    
}

void Computador::printfVerBios()
{
    
}
*/
bool Computador::operator== (const Computador &c)
{
    if(static_cast <Device> (*this) != static_cast <Device>(c))
        return false;
    if(sistemaOperacional != c.sistemaOperacional)
        return false;
    if(programa != c.programa)
        return false;
    if(dataatual != c.dataatual)
        return false;
    return true;
}

const Computador & Computador::operator=(const Computador &c)
{
    static_cast <Device> (*this) = static_cast <Device> (c);
    sistemaOperacional = c.sistemaOperacional;
    programa = c.programa;
    dataatual = c.dataatual;
       
    return *this;
}

bool Computador::operator!=(const Computador &c)
{
return !(*this==c);
}

ostream &operator<<(ostream &output,const Computador &aparelho)
{
    output << static_cast < Device >(aparelho)
            <<"Sistema operacio:" << aparelho.sistemaOperacional << '\n'
            <<"O programa que estah sendo executa eh:" << aparelho.programa << '\n'
            <<'\n'<<"Adata atual eh:" << aparelho.dataatual << '\n';
    return output;
    
}
