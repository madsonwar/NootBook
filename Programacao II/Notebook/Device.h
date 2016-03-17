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
    Device(int, int, int);
    Device(const Device &);
    ~Device();
    virtual void aumVol() = 0;
    virtual void dimVol() = 0;
    virtual void printfMarca() = 0;
    virtual void printfVerBios() = 0;
    bool operator== (const Device &);
    const Device & operator= (const Device &);
    bool operator!= (const Device &);
    Data dataDeFabricacao;
private:
    bool ligado;
    int volume;
    static int versaoDaBios;
    
    string marca;
    
};

#endif // DEVICE_H
