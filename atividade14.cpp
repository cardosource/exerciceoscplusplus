#include <iostream>
using namespace std;
//https://www3.ntu.edu.sg/home/ehchua/programming/cpp/cp4_PointerReference.html#:~:text=To%20get%20the%20value%20pointed,is%20called%20dereferencing%20or%20indirection).

void   aplicarMulta(float *multa){
         float valor = 4.0;
         float *excesso=&valor;
         *multa-=*excesso; 
         cout << "Valor da multa : " << valor << "\n" <<
         "Multa aplicada : " << *multa << "\n\n";
}


int main(){


float peso_cardume;


cout << "Peso Total Estimado  : ";
cin >>  peso_cardume;

cout << "Calculando....\n";
if(peso_cardume >= 50){
   
    aplicarMulta(&peso_cardume);
      
  }else{
    cout << "Liberado sem multa\n\n";
}


    return 0;
}
