#ifndef COMPUTADOR_H
#define COMPUTADOR_H
#include <iostream>
#include<string>
unsing namespace std;
class Computador : public Device
{
public:
    Computador();
    ~Computador();
    virtual void printfSo() = 0;
    virtual void printfVerBios() = 0;
    virtual string executarprograma(string &) = 0;
    virtual void ligarDesligar() = 0;
    virtual void aumVol() = 0;
    virtual void dimVol() = 0;
    virtual void printfMarca = 0;
protected:
    string sistemaOperacional;
    static int versaoDaBios;
    string programa;
    
};

#endif // COMPUTADOR_H
