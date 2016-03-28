#include "Notebook.h"

Notebook::Notebook()
{
}

Notebook::Notebook(int v,string m,string so)
{
    
    voltagem = v;
    marca = m;
    sistemaOperacional = so;
}

Notebook::~Notebook()
{
}

void Notebook::printfvoltagem()
{   
     cout << "A voltagem do Notebook eh:" << voltagem << '\n';
}

void Notebook::printfBateria()
{
    cout << "A bateria estah a " << bateria << "%" << '\n';
}

void Notebook::ligarDesligarTomada()
{
    if (tomada)
        {
            tomada = false;
            cout << "Desliguei da tomada!!!" << '\n';
            
            
        }
    else
        {
            tomada = true;
            cout <<"liguei a tomada!!!" << '\n';
            
            while(tomada && bateria <=100)
            {
                bateria +=1;
            }
        }
}

void Notebook::printfSo()
{
    cout << "O sistema operacional eh:" << sistemaOperacional << '\n';
}

void Notebook::printfVerBios()
{
    cout << "A versao da bios eh:" << versaoDaBios << '\n';
}

string Notebook::executarprograma(string &)
{
    cout << "Executando o programa:" << programa << '\n';
}

void Notebook::ligarDesligar()
{
    if(tomada)
    {
        if(ligado)
        {
            ligado = false;
            cout << "O Notebook foi Desligado!\n";
        }
        else
        {
            ligado = true;
            cout << "O Notebook foi Ligado!\n";
        }
    
    
    }
    else if(bateria)
    {
      if(ligado)
        {
            ligado = false;
            cout << "O Notebook foi Desligado!\n";
        }
        else
        {
            ligado = true;
            cout << "O Notebook foi Ligado!\n";
        }  
    

  
    }
    else
    {
        cout << "tentando ligadr o notebook, mas a bateria estah descarregada!!!\n"
    }
}
void Notebook::aumVol()
{
    volume +=1;
    cout << "O volume foi aumentado:" << volume << '\n';
}
void Notebook::dimVol()
{
    volume -=1;
    cout << "O volume foi diminuido:" << volume << '\n';
}
void Notebook::printfMarca()
{
    cout << "A marca do aparelho eh:" << marca << '\n';
}