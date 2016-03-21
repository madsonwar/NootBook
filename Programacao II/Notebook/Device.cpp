#include "Device.h"
#include "Data.h"

int Device::versaoDaBios = 125;

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
void Device::ligarDesligarAparelho()
{
    
    if(ligado)
        {
            cout << "computador jah esta ligado\n";
    
        }
    else 
        { ligado=true;
            cout << "computador foi ligado\n";
        
        }
}    
void Device::aumVol()
{
    if(ligado)
    {   
        volume +=2;
        cout << "O Volume foi aumentado:" << volume <<'\n';
    }
    else
        cout << "Tentando aumentar o volume mas, o aparelho esta desligado.";
}

void Device::dimVol()
{
     if(ligado)
    {   
        volume -=2;
        cout << "O Volume foi diminuido:" << volume <<'\n';
    }
    else
        cout << "Tentando diminuir o volume mas, o aparelho esta desligado.";
    
}

void Device::printfMarca()
{   if(ligado)
    {
        cout << "A marca do aparelho eh:" << marca << '\n';

    }
    else 
        cout << "O aparelho estah deligado!!!!\n";
}

void Device::printfVerBios()
{
    if(ligado)
    {
        cout << "Aversao da bios eh:" << versaoDaBios <<'\n';
    }
    else
        cout << "O aparelho estah desligado!!!\n";
    
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
    output  << "\nLigado = " << (aparelho.ligado? "Ligado":"Desligado") <<'\n'
            << "Sua marca eh:" << aparelho.marca << '\n'
            << "O volume eh:" << aparelho.volume << '\n'
            << "A versão da bios eh" <<aparelho.versaoDaBios << '\n'
            << "A data de fabricacao eh:" << aparelho.dataDeFabricacao << '\n';
    return output;
    
}
