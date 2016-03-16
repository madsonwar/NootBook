#include <stdio.h>
#include <string>
#include <iostream>
#include "Notebook.h"
#include "Data.h"
using namespace std;
int main(int argc, char **argv)
{
	Notebook dell;
    vector<Notebook*> formas(2);
    Smartphone c1(1.0);
    Tablet q1(1.0);
    
    dell.executarPrograma("anti virus");
    dell.ligarDesligarAparelho();
    dell.executarPrograma("anti virus");
    dell.aumVol();
    dell.aumVol();
    dell.aumVol();
    dell.dimVol();
 printf("hello world\n");
	return 0;
}