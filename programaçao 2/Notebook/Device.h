#ifndef DEVICE_H
#define DEVICE_H
#include <iostream>
#include<string>
unsing namespace std;

class Device
{
public:
    Device();
    ~Device();
    virtual void ligarDesligar() = 0;
    virtual void aumVol() = 0;
    virtual void dimVol() = 0;
    virtual void printfMarca = 0;
protected:
    bool ligado;
    int volume;
    string marca;
};

#endif // DEVICE_H
