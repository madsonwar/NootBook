#ifndef COMPUTADOR_H
#define COMPUTADOR_H
#include <iostream>
#include "Data.h"
#include "Device.h"
#include <string>
using namespace std;
class Computador : public Device
{
public:
    Computador();
    Computador(const Computador &);
    ~Computador();
    virtual void aumVol();
    virtual void dimVol();
    virtual void printfMarca();
    virtual void printfVerBios();
    bool operator== (const Computador &);
    const Computador & operator= (const Computador &);
    bool operator!= (const Computador &);
    void printfData();
    void execProgram();
private:
    string sistemaOperacional;
    string programa;
    Data dataatual;
};

#endif // COMPUTADOR_H
