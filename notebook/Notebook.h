#ifndef NOTEBOOK_H
#define NOTEBOOK_H


class Notebook
{
public:
    Notebook();
    ~Notebook();
    void ligarComputador(bool x);
    void executarPrograma(string x);
    

private:
    bool ligado;
    int capacidadedeProcessamento;
    string programa;
    
    
    
};

#endif // NOTEBOOK_H
