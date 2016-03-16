#ifndef TABLET_H
#define TABLET_H

class Tablet : public Notebook
{
     friend ostream &operator<<(ostream &,const Tablet &)
public:
    Tablet();
    Tablet(Tablet &);
    ~Tablet();
    void carregarBateria();
      bool operator== (const Tablet &);
    const Tablet & operator= (const Tablet &)
    bool operator!= (const Tablet &)
    
private:
    int bateria;
    
    
};

#endif // TABLET_H
