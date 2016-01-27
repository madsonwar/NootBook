#ifndef NOTEBOOK_H
#define NOTEBOOK_H


class Notebook
{
public:
    Notebook();
    ~Notebook();
    void ligarComputador(bool x);
    void aumentaVolumeDoSom(int x);
    

private:
    bool ligado;
    int volumeDoSom;
    
    
    
    
};

#endif // NOTEBOOK_H
