#ifndef COMPUTADORPORTATIL_H
#define COMPUTADORPORTATIL_H

class ComputadorPortatil : public Computador
{
public:
    ComputadorPortatil();
    ~ComputadorPortatil();
    virtual void printfBateria() = 0;
    virtual void ligarDesligarTomada() = 0;
    virtual void printfSo() = 0;
    virtual void printfVerBios() = 0;
    virtual string executarprograma(string &) = 0;
    virtual void ligarDesligar() = 0;
    virtual void aumVol() = 0;
    virtual void dimVol() = 0;
    virtual void printfMarca = 0;
protected:
    int bateria;
    bool tomada;

};

#endif // COMPUTADORPORTATIL_H
