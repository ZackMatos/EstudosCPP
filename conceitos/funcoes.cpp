#include <iostream>

using namespace std;

#define pi 3.14; //Definindo uma constante (valor nunca pode mudar)
#define opa cout << "\nopa"; //Usando define para não ter que ficar repetindo uma tarefa

int global; //Váriavel global (funciona em todas as funções)

void welcome(){
cout << "Seja Bem Vindo\n";
}

int somar(int n1, int n2){
int resultado; //Variável local (funciona apenas no escopo da função)
resultado = n1 + n2;
global = 1;
return resultado;
}

int main(){
    welcome();

int n1 = 2;
int n2 = 4;
int resultado = somar(n1,n2);
cout << "Soma: " << resultado << endl;
cout << global << endl;
cout << pi;
opa;

    return 0;
}