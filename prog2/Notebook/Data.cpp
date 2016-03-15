#include "Data.h"

Data::Data()
{
}


Data::Data(int d, int m, int a)
{
    dia=d;
    mes=m;
    ano=a;
}

Data::~Data()
{
}


Data & Data::setDia(int d)
{
    dia = d;
}

Data & Data::setMes(int m)
{
    mes = m;
}

Data & Data::setAno(int a)
{
    ano=a;
    
}

