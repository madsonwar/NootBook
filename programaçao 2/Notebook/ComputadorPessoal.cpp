#include "ComputadorPessoal.h"

ComputadorPessoal::ComputadorPessoal()
{
    ligado = false;
    marca = "Desconhecido";
    
}

ComputadorPessoal::ComputadorPessoal(string m,string so,string n)
{
    marca = m;
    sistemaOperacional = so;
    navegador = n;
}

ComputadorPessoal::~ComputadorPessoal()
{
}


void Computador::printfSo()
{
    if(ligado)
    {
        cout << "O Sistema operacional utilizado por esse computador eh:" << sistemaOperacional << '\n'; 
    }
    else
        cout << "O computador estah desligado!!\n";
}
void Computador::printfVerBios()
{
    if(ligado)
    {
        cout << "A versao da bios do computador eh:" << versaoDaBios << '\n'; 
    }
    else
        cout << "O computador estah desligado!!\n";
}
void Computador::executarprograma()
{
     if(ligado)
    {
        cout << "O programa em execução no PC eh:" << programa << '\n'; 
    }
    else
        cout << "O computador estah desligado!!\n";
}
void Computador::ligarDesligar()
{
    if(ligado)
    {    
        ligado = false;
        cout << "O computador foi desligado!\n";
    }
    else
    {
        ligado = true;
        cout << "O computador foi ligado!\n";
    }
    
}
void Computador::aumVol()
{
    if(ligado)
    {    
        volume +=2;
        cout << "O volume foi aumentado em:"<< volume << '\n';
    }
    else
        cout << "O computador estah desligado!\n";
    
}
void Computador::dimVol()
{
    if(ligado)
    {    
        ligado = false;
        cout << "O computador foi desligado!\n";
    }
    else
    {
        ligado = true;
        cout << "O computador foi ligado!\n";
    }
}
void Computador::printfMarca()
{
    
}
void Computador::usarNavegador()
{
    
}
void Computador::conectarAinternet()
{
    
}