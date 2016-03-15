#ifndef NOTEBOOK_H
#define NOTEBOOK_H
#include "Data.h"
#include <string>
#include <iostream>

using namespace std;

class Notebook
{
    friend ostream &operator<<(ostream &,const Notebook &);
public:
    Notebook();
    Notebook(bool , string , int , string, int, int, int);
    Notebook(Notebook &);
    ~Notebook();
    void ligarDesligarAparelho();
    void aumtVol();
    void dimVol();
    void executarProgam(string);
private:
    bool ligado;
    string programa;
    int volume;
    static int versaodaBios;
    string sistOper;
    Data fabrincaData;
};

#endif // NOTEBOOK_H
