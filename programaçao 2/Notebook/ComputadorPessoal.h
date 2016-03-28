#ifndef COMPUTADORPESSOAL_H
#define COMPUTADORPESSOAL_H

class ComputadorPessoal : Computador
{
public:
    ComputadorPessoal();
    ComputadorPessoal(string,string,string);
    ~ComputadorPessoal();
    virtual void printfSo();
    virtual void printfVerBios();
    virtual void executarprograma();
    virtual void ligarDesligar();
    virtual void aumVol();
    virtual void dimVol();
    virtual void printfMarca();
    void usarNavegador();
    void conectarArrede();
protected:
    Modem conectividade;
    string navegador;
};

#endif // COMPUTADORPESSOAL_H
