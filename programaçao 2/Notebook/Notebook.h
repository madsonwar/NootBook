#ifndef NOTEBOOK_H
#define NOTEBOOK_H

class Notebook
{
public:
    Notebook();
    ~Notebook();
    void printfvoltagem();
    virtual void printfBateria();
    virtual void ligarDesligarTomada();
    virtual void printfSo();
    virtual void printfVerBios();
    virtual string executarprograma(string &);
    virtual void ligarDesligar();
    virtual void aumVol();
    virtual void dimVol();
    virtual void printfMarca();
protected:
   int voltagem;
};

#endif // NOTEBOOK_H
