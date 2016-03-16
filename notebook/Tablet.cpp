#include "Tablet.h"

Tablet::Tablet()
{
    bateria = 0;
    
}

Tablet::Tablet(Tablet &l)
{
    bateria = l.bateria;
    
}


Tablet::~Tablet()
{
}

void Tablet::carregarBateria()
{  
    if(bateria < 100)
    {
         bateria += 1;
         cout << "A bateria estah carregando:" << bateria <<'\n';
    }
}

ostream &operator<<(ostream & output,const Tablet &comp)
{
    output << static_cast< Notebook > (comp)
            << "A bateria eh" << comp.bateria;
            
    return output;
    
}

bool Tablet::operator== (const Tablet &c)
{
    if(static_cast<Notebook>(*this) != static_cast<Notebook>(c) )
        return false;
    if(bateria != c.bateria)
        return false;
    
    
}

const Tablet & Tablet::operator=(const Tablet &x)
{
    static_cast <Notebook&> (*this) = static_cast <Notebook> (x);
    bateria=x.bateria;
    
    return *this;
}

bool Tablet::operator!=(const Tablet &c)
{
return !(*this==c);
}

void Tablet::ligarDesligarAparelho()
{
      if( ligado )
    {
        ligado = false;
        cout << "O Tablet foi desligado\n";
    }
    else
    {
        ligado=true;
        cout << "O Tablet foi ligado\n";
        
    }
}

void Notebook::aumVol()
{
   if( ligado )
    {    volume +=1;
        cout << "O volume do Device foi diminuido:" << volume <<'\n';
    }
    else
        cout << "O Device estah desligado\n";     
}

void Notebook::dimVol()
{
    if( ligado )
    {    volume -=1;
        cout << "O volume do Device foi diminuido:" << volume <<'\n';
    }
    else
        cout << "O Device estah desligado\n";
}