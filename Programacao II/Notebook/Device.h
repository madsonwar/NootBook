#ifndef DEVICE_H
#define DEVICE_H
#include <string>
#include <iostream>
#include "Data.h"
using namespace std;
class Device
{
    friend ostream &operator<<(ostream &,const Device &);
public:
    Device(int e, int i, int o);
    
    Device(const Device &a);
    
    ~Device();
    //virtual void aumVol() = 0;
    //virtual void dimVol() = 0;
    //virtual void printfMarca() = 0;
    //virtual void printfVerBios() = 0;
    void aumVol();
    void dimVol();
    void printfMarca();
    void printfVerBios();
    void ligarDesligarAparelho();
    bool operator== (const Device &);
    const Device & operator= (const Device &);
    bool operator!= (const Device &);
    
private:
    bool ligado;
    int volume;
    static int versaoDaBios;
    Data dataDeFabricacao;
    string marca;
    
};

#endif // DEVICE_H
