#ifndef NOTEBOOK_H
#define NOTEBOOK_H
#include <string>
#include <iostream>
using namespace std;
class Notebook
{
public:
    Notebook();
    ~Notebook();
    void ligarDesligarAparelho();
    void executarPrograma(string prog);
    void aumVol();
    void dimVol();
private:
    
    bool ligado;
    string programa;
    int volume;
    static int versaoDaBios;
};

#endif // NOTEBOOK_H