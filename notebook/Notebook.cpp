#include "Notebook.h"
#include <iostream>
#include <string>
using namespace std;



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
    //bateria = 0;
    
}
Notebook::Notebook(const Notebook &a)
{
    fabricante = a.fabricante;
    ligado = a.ligado;
    volumeDoSom = a.volumeDoSom;
    programa = a.programa;
    
    
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
        { ligado=true;
            cout << "computador foi ligado\n";
        
        }
    
}
            
    
void Notebook::executarPrograma(string prog)
    
{
    
        
    cout << "Executando o programa" << prog << '\n';
    
}
    

void Notebook::aumentaVolumeDoSom()
{
    
    volumeDoSom  +=2;
    
}
    

void Notebook::mostrarVersaoDaBios()
    
{
    
        
    cout << "A versão da bios e" << versaoDaBios << '\n';
        
}
    
/*void Notebook::meuComputador()
{
        
    cout << 
        
        
}

void Notebook::inserirProcesso(const string &process, const index)
{
    
    if(index >= 0 && index < quantProcessos)
            filaDeProcessos[]
    
}*/
ostream &operator<<( ostream &output, const Notebook &dell)
{
    output <<  "(" << dell.fabricante << ")";
    
    return output;
}

const Notebook &operator=( const Notebook &dell )
   :size( dell.size ) 
{
    ptr = new int [ size ];
    
    fabricante = dellfabricante;
    
}

bool Notebook::operator==( const Notebook &dell)

{
    if(fabricante != &dell.fabricante)
        return false;
    
}

