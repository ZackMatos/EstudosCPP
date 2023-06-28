#include <iostream> 

using namespace std;

int main(){
    int idade = 18;
    cout << idade << endl;

    float real = 5.2e99;
    cout << real << endl;

    double real2 = 5.2e99;
    cout << real2 << endl;

    bool booleano;
    booleano << true;
    cout << booleano << endl; //1 == True, 0== False

    char letra; // Tem espaço para apenas 1 letra
    letra = 'b'; //Com char tem que ser entre aspas simples
    cout << letra << endl;

    string palavra;
    palavra = "bola";
    cout << palavra << endl;


    return 0;
}