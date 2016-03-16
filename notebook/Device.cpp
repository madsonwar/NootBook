#include "Device.h"
#include "Notebook.h"
#include <string>
#include <iostream>
#include "Data.h"
using namespace std;
Device::Device()
{
}

Device::~Device()
{
}

Device::Device(Device &o)
{
    marca = o.marca;
    voltagem = o.voltagem;
}


void Device::printfMarca()
{
    cout << " A marca do aparelho eh:" << marca << '\n';
    
}

void Device::printfVoltagem()
{
    cout << " A voltagem do aparelho eh" << voltagem << '\n';
}

ostream &operator<<(ostream & output,const Device &comp)
{
    output << static_cast< Notebook > (comp)
            << "voltagem eh" << voltagem;
            
    return output;
    
}

bool Device::operator== (const Device &c)
{
    if(static_cast<Notebook>(*this) != static_cast<Notebook>(c) )
        return false;
    if(voltagem != c.voltagem)
        return false;
    if(marca != c.marca)
        return false;
        
    
}

const Device & Device::operator=(const Device &x)
{
    static_cast <Notebook&> (*this) = static_cast <Notebook> (x);
    marca = x.marca;
    voltagem=x.voltagem;
    return *this;
}

bool Device::operator!=(const Device &c)
{
return !(*this==c);
}

void Device::ligarDesligarAparelho()
{
    if( ligado )
    {
        ligado = false;
        cout << "O Device foi desligado\n";
    }
    else
    {
        ligado=true;
        cout << "O Device foi ligado\n";
        
    }
}

void Device::aumVol()
{
    if( ligado )
    {    volume +=3;
        cout << "O volume do Device foi aumentado:" << volume <<'\n';
    }
    else
        cout << "O Device estah desligado\n";
}

void Notebook::dimVol()
{
    if( ligado )
    {    volume -=3;
        cout << "O volume do Device foi diminuido:" << volume <<'\n';
    }
    else
        cout << "O Device estah desligado\n";
}