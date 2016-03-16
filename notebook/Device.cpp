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

