#ifndef SMARTPHONE_H
#define SMARTPHONE_H
#include <iostream>
#include "Data.h"
#include "Device.h"

#include <string>
using namespace std;
class Smartphone : public Device
{
    friend ostream &operator<<(ostream &,const Smartphone &);
public:
    Smartphone();
    Smartphone(const Smartphone &);
    ~Smartphone();
    bool operator== (const Smartphone &);
    const Smartphone & operator= (const Smartphone &);
    bool operator!= (const Smartphone &);
private:
    string versaoDoIos;
    string nomeDoDisplay;

};

#endif // SMARTPHONE_H
