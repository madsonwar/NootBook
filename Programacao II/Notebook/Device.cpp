#include "Device.h"
#include "Data.h"
Device::Device(int dia, int mes, int ano)
:dataDeFabricacao(dia ,mes ,ano)
{
    volume = 0;
    marca = "desconhecida";
    ligado = false;
    
}

Device::~Device()
{
}

Device::Device(const Device &aparelho)
{
    volume = aparelho.volume;
    marca = aparelho.marca;
    ligado = aparelho.ligado;
    dataDeFabricacao = aparelho.dataDeFabricacao;
}
void Device::aumVol()
{
    
}

void Device::dimVol()
{
    
}

void Device::printfMarca()
{
    
}

void Device::printfVerBios()
{
    
}

bool Device::operator== (const Device &c)
{
    if(volume != c.volume)
        return false;
    if(marca != c.marca)
        return false;
    if(ligado != c.ligado)
        return false;
    if(dataDeFabricacao != c.dataDeFabricacao)
        return false;
    return true;
}

const Device & Device::operator=(const Device &c)
{
    volume = c.volume;
    marca = c.marca;
    ligado = c.ligado;
    dataDeFabricacao = c.dataDeFabricacao;    
       
    return *this;
}

bool Device::operator!=(const Device &c)
{
return !(*this==c);
}

ostream &operator<<(ostream & output,const Device &aparelho)
{
    output << "O aparelho esta:" << aparelho.ligado <<'\n'
            <<"Sua marca eh:" << aparelho.marca << '\n'
            <<"O volume eh:" << aparelho.volume << '\n'
            <<'\n'<<'A data de fabricacao eh:' << aparelho.dataDeFabricacao << '\n';
    return output;
    
}
