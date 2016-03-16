#ifndef NOTEBOOK_H
#define NOTEBOOK_H
#include <string>
#include <iostream>
#include "Data.h"
using namespace std;
class Notebook
{
    friend ostream &operator<<(ostream &,const Notebook &);
public:
    Notebook();
    Notebook(int, int, int);
    Notebook(Notebook &);
    ~Notebook();
    virtual void ligarDesligarAparelho() = 0;
    virtual void dimVol() = 0;
    virtual void aumVol() = 0;
    void executarPrograma(string prog);
    bool operator== (const Notebook &);
    const Notebook & operator= (const Notebook &)
    bool operator!= (const Notebook &)
    
private:
    
    bool ligado;
    string programa;
    int volume;
    static int versaoDaBios;
    Data dataDeFabricacao;
};

#endif // NOTEBOOK_H