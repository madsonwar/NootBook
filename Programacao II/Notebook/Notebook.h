#ifndef NOTEBOOK_H
#define NOTEBOOK_H
#include "Computador.h"
#include <string>
#include <iostream>
using namespace std;
class Notebook : public Computador
{
    friend ostream &operator<<(ostream &,const Notebook &);
public:
    Notebook();
    Notebook(const Notebook &);
    ~Notebook();
    void printfBateria();
    void printfVoltagem();
    void carregarBateria();
    bool operator== (const Notebook &);
    const Notebook & operator= (const Notebook &);
    bool operator!= (const Notebook &);
private:
    int bateria;
    int voltagem;
};

#endif // NOTEBOOK_H
