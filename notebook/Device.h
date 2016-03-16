#ifndef DEVICE_H
#define DEVICE_H
#include "Notebook.h"
#include <string>
#include <iostream>
#include "Data.h"
using namespace std;
class Device : public Notebook
{
    friend ostream &operator<<(ostream &,const Device &);
public:
    Device();
    Device(const Device &);
    ~Device();
    virtual void ligarDesligarAparelho();
    virtual void dimVol();
    virtual void aumVol();
    void printfMarca();
    void printfVoltagem();
      bool operator== (const Device &);
    const Device & operator= (const Device &);
    bool operator!= (const Device &);
    
private:
    string marca;
    float voltagem;
};

#endif // DEVICE_H
