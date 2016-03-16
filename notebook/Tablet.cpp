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