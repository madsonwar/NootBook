#ifndef NOTEBOOK_H
#define NOTEBOOK_H
#include <string>

class Notebook
{
public:
    Notebook(); 
    Notebook(string fabric);
    ~Notebook();
    void ligarComputador(bool x);
    void aumentaVolumeDoSom(int x);
    void capacidadeDaBateria(int x);
    void executarPrograma(string x);
private:
    bool ligado;
    int volumeDoSom;
    string fabricante;
    string programa;
    
    
};

#endif // NOTEBOOK_H
