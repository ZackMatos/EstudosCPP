#include <iostream>
#include "cidadesbrasil.h"

using namespace std;

int main(){

    cidadesbrasil tatui(190000, 1990);
    cout << "Tatui:\n";
    cout << "Populacao: " <<  endl;
    cout << tatui.getpopulacao() << endl;
    cout << "Ano de Fundacao:" << endl;
    cout << tatui.getano_fundacao() << endl;

    system("pause");


   

    return 0;
}