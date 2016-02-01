#include "Notebook.h"
#include <string>

Notebook::Notebook()
{
    ligado=false;
    bateria=0;
}
Notebook::Notebook(string fabric )
{
    fabricante=fabric;
}


Notebook::~Notebook()
{
}

void Notebook::ligarComputador(bool x){
    ligado=true;
    printf("computador esta ligado\n");
    }
    
void Nootbook::executarPrograma(String x){
    
        printf("Executando o programa %s\n",x);
    
    
    }
    
void Nootbook::aumentaVolumeDoSom(int x){
    
    volumeDoSom=volumeDoSom+x;
    
    }
    
void Nootbook::capacidadeDaBateria(int x){
    if(bateria<30) printf("Bateria precisa ser recarregada\n");
    }