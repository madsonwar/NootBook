#include "Data.h"

#include <iostream>

using namespace std;
Data::Data()
{
}

Data::Data(const Data &data)
{
    dia = data.dia;
    mes = data.mes;
    ano = data.ano;
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


void Data::setDia(int d)
{
    dia = d;
}

void Data::setMes(int m)
{
    mes = m;
}

void Data::setAno(int a)
{
    ano=a;
    
}

bool Data::operator== (const Data &c)
{
    if(dia != c.dia)
        return false;
    if(mes != c.mes)
        return false;
    if(ano != c.ano)
        return false;
    return true;
}

const Data & Data::operator=(const Data &c)
{
    dia = c.dia;
    mes = c.mes;
    ano = c.ano;
    
    
   
    return *this;
}

bool Data::operator!=(const Data &c)
{
return !(*this==c);
}

ostream &operator<<(ostream & output,const Data &data)
{
    output << data.dia << '/' << data.mes <<'/' << data.ano;
            
            
    return output;
    
}
