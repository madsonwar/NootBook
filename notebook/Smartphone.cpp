#include "Smartphone.h"
#include "Device.h"
#include <string>
#include <iostream>
#include "Notebook.h"
#include "Data.h"
using namespace std; 

Smartphone::Smartphone()
{
    
}

Smartphone::~Smartphone()
{
}

void Smartphone::printfVersaoIos()
{
    cout<< "A versão do Ios eh:"<< versaoDoIos <<'\n';
}

ostream &operator<<(ostream & output,const Smartphone &comp)
{
    output << static_cast< Device > (comp)
            << "A versão do Ios eh" << comp.versaoDoIos;
            
    return output;
    
}

bool Smartphone::operator == (const Smartphone &c)
{
    if(static_cast<Device>(*this) != static_cast<Device>(c) )
        return false;
    if(versaoDoIos!= c.versaoDoIos)
        return false;
    
        
    
}

const Smartphone & Smartphone::operator=(const Smartphone &p)
{
    static_cast <Device&> (*this) = static_cast <Device> (p);
   versaoDoIos=p.versaoDoIos; 
    return *this;
}

bool Smartphone::operator!=(const Smartphone &c)
{
return !(*this==c);
}

void Smartphone::ligarDesligarAparelho()
{
    if( ligado )
    {
        ligado = false;
        cout << "O smartphone foi desligado \n";
    }
    else
    {
        ligado=true;
        cout << "O smartphone foi ligado\n";
        
    }
}

void Smartphone::aumVol()
{
     if( ligado )
    {    volume +=1;
        cout << "O volume do smartphone foi aumentado:" << volume <<'\n';
    }
    else
        cout << "O smartphone estah desligado\n";
}

void Smartphone::dimVol()
{
     if( ligado )
    {    volume -=1;
        cout << "O volume do smartphone foi aumentado:" << volume <<'\n';
    }
    else
        cout << "O smartphone estah desligado\n";
}