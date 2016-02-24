#ifndef NOTEBOOK_H
#define NOTEBOOK_H
#include <string>



class Notebook
{
public:
    Notebook(); 
    Notebook(string fabric);
    Notebook(const Notebook &);
    ~Notebook();
    void ligarComputador();
    void aumentaVolumeDoSom();
    void capacidadeDaBateria(int x);
    void executarPrograma(string prog);
    static void mostrarVersaoDaBios();
    void meuComputador();
    void inserirProcesso();
    friend ostream &operator<<(ostream & , const Notebook & );
    const Notebook &operator=( const Notebook & );
    bool operator==( const Notebook & ) const; 
private:
    bool ligado;
    int volumeDoSom;
    string fabricante;
    string programa;
    static int versaoDaBios;
    //Data dataDeFabricacao;
    //string *filaDeProcessos;
    //int quantProcessos;
    
    
    
};

#endif // NOTEBOOK_H
