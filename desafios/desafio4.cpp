#include <iostream>

using namespace std;

int main(){

    int idade;
    float renda;

    cout << "Digite sua idade:" << endl;
    cin >> idade;
    cout << "Digite sua renda: " << endl;
    cin >> renda;
    if (idade > 21 && renda < 1200.00)
    {
      cout << "Parabens, voce tem os requisitos para participar do programa";
    }
    else {
        cout << "Infelizmente, voce nao tem os requisitos para participar do programa";
    }
    
    return 0;

}