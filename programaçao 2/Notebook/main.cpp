#include <stdio.h>
#include <iostream>
#include<string>
unsing namespace std;
int main(int argc, char **argv)
{   
    ComputadorPessoal c;
    Notebook n;
    
    vector <Device *> aparelhos(2);
    
    aparelhos[0] = new Computador("HP","Windowns","Google Crhoma");
    aparelhos[1] = new Notebook(110,"Ubunto");
	
}
