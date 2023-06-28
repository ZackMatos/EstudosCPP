#include <iostream>

using namespace std;

class carro{
  private:
  int ano;
  float valor, km;
   
  public:
  //construtor
   carro(int a, float v, float k);




   //get - obter algo (uma váriavel)
   //set - indicar algo
   void setano(int a);

   int getano();

   void setvalor(float v);

   float getvalor();

   void setkm(float k);

   float getkm();


};

int main(){

    return 0;
}





 carro::carro(int a=0, float v=-1, float k=-1){
    ano = a;
    valor = v;
    km = k;
   }




   //get - obter algo (uma váriavel)
   //set - indicar algo
   void carro::setano(int a){
   // this->ano = ano; this é usado para indicar que a váriavel é desse escopo (caso tenha o mesmo nome)
    ano = a;
   }

   int carro::getano(){
    return ano;
   }

   void carro::setvalor(float v){
    valor = v;
   }

   float carro::getvalor(){
    return valor;
   }

   void carro::setkm(float k){
    km = k;
   }

   float carro::getkm(){
    return km;
   }