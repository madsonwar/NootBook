#ifndef NOTEBOOK_H
#define NOTEBOOK_H
#include <string>
#include <Data.h>
class Notebook
{
public:
    Notebook(); 
    Notebook(string fabric);
    Notebook(const Notebook &);
    ~Notebook();
    void ligarComputador(bool x);
    void aumentaVolumeDoSom(int aumento);
    void capacidadeDaBateria(int x);
    void executarPrograma(string x);
    static void mostrarVersaoDaBios();
private:
    bool ligado;
    int volumeDoSom;
    string fabricante;
    string programa;
    static int versaoDaBios;
    Data dataDeFabricacao;
    
    
};

#endif // NOTEBOOK_H
