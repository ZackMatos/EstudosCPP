//ações das funções

#include <iostream>
#include "carro.h"
using namespace std;


carro::carro(int a=0, float v=-1, float k=-1){
    ano = a;
    valor = v;
    km = k;
   }




   void carro::setano(int a){
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