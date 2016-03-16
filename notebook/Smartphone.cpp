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