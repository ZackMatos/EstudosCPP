#include <iostream>

using namespace std;

int potencia(int b,int e){
int resultado = 1;
for (int contador = 0; contador < e; contador++)
{
resultado *= b;
}
return resultado;
}

int main(){
  
    float numero1;
    float numero2;

    cout << "Digite um numero:" << endl;
    cin >> numero1;
    cout << "Deseja elevar esse numero por quanto? " << endl;
    cin >> numero2;
    cout << "O resultado de " << numero1 << " elevado a " << numero2 << " e igual a " << potencia(numero1,numero2);
   
    return 0;
}