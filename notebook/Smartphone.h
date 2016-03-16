#ifndef SMARTPHONE_H
#define SMARTPHONE_H
#include "Device.h"
#include <string>
#include <iostream>
#include "Notebook.h"
#include "Data.h"
using namespace std;
class Smartphone : public Device
{
    friend ostream &operator<<(ostream &,const Smartphone &);
public:
    Smartphone();
    ~Smartphone();
    void printfVersaoIos();
    
private:
    
    string versaoDoIos;
};

#endif // SMARTPHONE_H
