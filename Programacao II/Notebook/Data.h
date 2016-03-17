#ifndef DATA_H
#define DATA_H
#include <iostream>

using namespace std;
class Data
{
    friend ostream &operator<<(ostream &,const Data &);
public:
    Data(int, int, int);
    Data();
    Data(const Data&);
    ~Data();
    void setDia(int);
    void setMes(int);
    void setAno(int);
    bool operator== (const Data &);
    const Data & operator= (const Data &);
    bool operator!= (const Data &);
private:
    int dia;
    int mes;
    int ano;
};

#endif // DATA_H