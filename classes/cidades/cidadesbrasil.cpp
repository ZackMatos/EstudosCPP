#include <iostream>
#include "cidadesbrasil.h"
using namespace std;

cidadesbrasil::cidadesbrasil(int p, int ano){
populacao = p;
ano_fundacao = ano;
}

void cidadesbrasil::setpopulacao(int p)
{
populacao = p;
}

int cidadesbrasil::getpopulacao()
{
return populacao;
}

void cidadesbrasil::setano_fundacao(int f)
{
ano_fundacao = f;
}

int cidadesbrasil::getano_fundacao()
{
    return ano_fundacao;
}
