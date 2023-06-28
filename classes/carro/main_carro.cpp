//implementar a função na main

#include <iostream>
#include "carro.h"

using namespace std;

int main(){
carro palio(1995, 10000, 190000);
cout << "Palio:\n";
cout << "Ano: " << palio.getano() << endl;
cout << "Valor: " << palio.getvalor() << endl;
cout << "Km: " << palio.getkm() << endl;

carro celta(1980, 95000, 19000);
cout << "Celta:\n";
cout << "Ano: " << celta.getano() << endl;
cout << "Valor: " << celta.getvalor() << endl;
cout << "Km: " << celta.getkm() << endl;


system("pause");

    return 0;
}