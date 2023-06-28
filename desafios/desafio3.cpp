#include <iostream>
#include <cmath>

using namespace std;

float funcao(float x){
float formula;

formula = (pow(x,2) - 3 * x) + 5;
return formula;

}

int main(){
   float valor;
   cout << "Digite um valor para f(x)" << endl;
   cin >> valor;
   cout << "O resultado da formula e: " << funcao(valor);

    return 0;
}