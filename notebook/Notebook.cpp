#include "Notebook.h"
#include <string>


int Notebook::versaoDaBios = 0;

Notebook::Notebook()
{
    ligado = false;
    bateria = 0;
}
Notebook::Notebook(string &fabric )
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

void Notebook::ligarComputador(bool liga){
    ligado = true;
    printf("computador esta ligado\n");
    }
    
void Nootbook::executarPrograma(String prog){
    
        printf("Executando o programa %s\n",prog);
    
    
    }
    
void Nootbook::aumentaVolumeDoSom(int aumento){
    
    volumeDoSom = volumeDoSom+aumento;
    
    }
    
void Nootbook::capacidadeDaBateria(){
    if(bateria<30) printf("Bateria precisa ser recarregada\n");
    
    
    }