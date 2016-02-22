#include "Notebook.h"
#include <iostream>
#include "Data.h"
#include "HD.h"
#include "HD.hpp"


int Notebook::versaoDaBios = 0;

Notebook::Notebook(const int nprocessos)
{
    ligado = false;
    bateria = 0;
    if ( nprocessos > 0 )
    {
        filaDeProcessos = new string[quantProcessos];
        quantLivros=nprocessos;
        cout << "Numero de processos eh" << 
    
    }
}
Notebook::Notebook(string &fabric , Data &x)
{
    fabricante = fabric;
    ligado = false;
    bateria = 0;
    
}
Notebook::Notebook(const Notebook &a)
{
    fabricante = a.Notebook;
    ligado = a.Notebook;
    volumeDoSom = a.Notebook;
    programa = a.Notebook;
    
    
}
Notebook::~Notebook()
{
}

void Notebook::ligarComputador()
{   
    if(ligado)
        {
            cout << "computador jah esta ligado\n";
    
        }
    else 
        {
            cout << "computador foi ligado\n";
        
        }
    
}
            
    
void Nootbook::executarPrograma(String prog)
    
{
    
        
    cout << "Executando o programa" << prog << '\n';
    
}
    
void Nootbook::aumentaVolumeDoSom()
    
{
    
    volumeDoSom  +=2;
    
}
    

void Notebook::mostrarVersaoDaBios()
    
{
    
        
    cout << "A versão da bios e" << versaoDaBios << '\n';
        
}
    
void Notebook::meuComputador()
{
        
    cout << 
        
        
}

void Notebook::inserirProcesso(const string &process, const index)
{
    
    if(index >= 0 && index < quantProcessos)
            filaDeProcessos[]
    
}