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
      bool operator== (const Smartphone &);
    const Smartphone & operator= (const Smartphone &)
    bool operator!= (const Smartphone &)
    
private:
    
    string versaoDoIos;
};

#endif // SMARTPHONE_H
