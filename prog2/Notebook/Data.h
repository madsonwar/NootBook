#ifndef DATA_H
#define DATA_H

class Data
{
public:
    Data(int, int, int);
    Data();
    ~Data();
    Data & setDia(int);
    Data & setMes(int);
    Data & setAno(int);
private:
    int dia;
    int mes;
    int ano;
};

#endif // DATA_H
