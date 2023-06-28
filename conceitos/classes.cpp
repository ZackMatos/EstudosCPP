#include <iostream>

using namespace std;

class aviso{
   public:

   void conta(){
    cout << "Sua conta esta sendo invadida\n";
   }

   void insta(){
    cout << "Seu instagram esta sendo invadido\n";
   }

};

class carro{
   private:
   int ano;
   float valor, km;

   public:
   //construtor
   carro(int a=0, float v=-1, float k=-1){
    ano = a;
    valor = v;
    km = k;
   }




   //get - obter algo (uma váriavel)
   //set - indicar algo
   void setano(int a){
   // this->ano = ano; this é usado para indicar que a váriavel é desse escopo (caso tenha o mesmo nome)
    ano = a;
   }

   int getano(){
    return ano;
   }

   void setvalor(float v){
    valor = v;
   }

   float getvalor(){
    return valor;
   }

   void setkm(float k){
    km = k;
   }

   float getkm(){
    return km;
   }

};

int main(){
    aviso conta;
    conta.conta();
    conta.insta();

    // carro palio;
    // palio.setano(1980);
    // palio.getano();

    carro palio(1980, 12000, 150000);
    carro fusca(1970, 8000, 85000);
    return 0;
}