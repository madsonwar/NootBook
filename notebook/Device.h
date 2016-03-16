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
    void printfMarca();
    void printfVoltagem();
    
private:
    string marca;
    float voltagem;
};

#endif // DEVICE_H
