#include "Computador.h"
#include "Device.h"

Computador::Computador()
{
}

Computador::Computador(const Computador &comp)
:Device(static_cast<Device>(comp))
{
    sistemaOperacional = comp.sistemaOperacional;
}
Computador::~Computador()
{
}


/*void Computador::aumVol()
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

bool Computador::operator== (const Computador &c)
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

const Computador & Computador::operator=(const Computador &c)
{
    volume = c.volume;
    marca = c.marca;
    ligado = c.ligado;
    dataDeFabricacao = c.dataDeFabricacao;    
       
    return *this;
}

bool Computador::operator!=(const Computador &c)
{
return !(*this==c);
}

ostream &operator<<(ostream & output,const Computador &aparelho)
{
    output << "O aparelho esta:" << aparelho.ligado <<'\n'
            <<"Sua marca eh:" << aparelho.marca << '\n'
            <<"O volume eh:" << aparelho.volume << '\n'
            <<'\n'<<'A data de fabricacao eh:' << aparelho.dataDeFabricacao << '\n';
    return output;
    
}
*/