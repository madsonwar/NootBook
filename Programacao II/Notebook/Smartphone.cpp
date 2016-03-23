#include "Smartphone.h"
#include "Device.h"
Smartphone::Smartphone()
:Device(15,9,2019)
{   
    versaoDoIos = "Desconhecido";
    nomeDoDisplay = "Desconhecido";
}

Smartphone::Smartphone(const Smartphone &c):Device(static_cast<Device>(c))
{
    versaoDoIos = c.versaoDoIos;
    nomeDoDisplay = c.nomeDoDisplay;
}

Smartphone::~Smartphone()
{
}

bool Smartphone::operator== (const Smartphone &c)
{
    if(static_cast <Device> (*this) != static_cast <Device>(c))
        return false;
    if(versaoDoIos != c.versaoDoIos)
        return false;
    if(nomeDoDisplay != c.nomeDoDisplay)
        return false;
    
    return true;
}

const Smartphone & Smartphone::operator=(const Smartphone &c)
{
    static_cast <Device> (*this) = static_cast <Device> (c);
    versaoDoIos = c.versaoDoIos;
    nomeDoDisplay = c.nomeDoDisplay;
       
    return *this;
}

bool Smartphone::operator!=(const Smartphone &c)
{
return !(*this==c);
}

ostream &operator<<(ostream &output,const Smartphone &aparelho)
{
    output << static_cast < Device >(aparelho)
            <<"A versao do Ios eh:" << aparelho.versaoDoIos << '\n'
            <<"O nome do display eh:" << aparelho.nomeDoDisplay << '\n';
    return output;
    
}