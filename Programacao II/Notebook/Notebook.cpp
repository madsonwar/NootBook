#include "Notebook.h"
#include "Computador.h"
#include "Device.h"
Notebook::Notebook():Computador()
{
    bateria = 0;
    voltagem = 785741;
}

Notebook::Notebook(const Notebook &comp):Computador(static_cast<Computador>(comp))
{
    bateria = comp.bateria;
    voltagem = comp.voltagem;
}

Notebook::~Notebook()
{
}

void Notebook::printfBateria()
{
    cout << "A carga da bateria eh:" << bateria << '\n';
}

void Notebook::carregarBateria()
{
    bateria +=2;
    cout << "Bateria esta carregando:" << bateria << '\n';
}

void Notebook::printfVoltagem()
{
    cout << "A voltagem do aparelho eh:" << voltagem <<'\n';
}

bool Notebook::operator== (const Notebook &c)
{
    if(static_cast <Computador> (*this) != static_cast <Computador>(c))
        return false;
    if(bateria != c.bateria)
        return false;
    if(voltagem != c.voltagem)
        return false;
    
    return true;
}

const Notebook & Notebook::operator=(const Notebook &c)
{
    static_cast <Computador> (*this) = static_cast <Computador> (c);
    bateria = c.bateria;
    voltagem = c.voltagem;
    
       
    return *this;
}

bool Notebook::operator!=(const Notebook &c)
{
return !(*this==c);
}

ostream &operator<<(ostream &output,const Notebook &aparelho)
{
    output << static_cast < Computador >(aparelho)
            <<"Bateria:" << aparelho.bateria << '\n'
            <<"A voltagem do aparelho eh:" << aparelho.voltagem << '\n';
            
    return output;
    
}
