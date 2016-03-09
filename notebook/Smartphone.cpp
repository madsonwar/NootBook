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