#include <iostream>

// referencia; http://www.abreuadvocacia.adv.br/aprenda-a-calcular-horas-trabalhadas-de-uma-vez-por-todas.html
int main(){

using namespace std;
    int semana = 5;
    float horas_trabalhadas;
    float porHora;
    cout << "Infome quantas horas trabalha por semana =  ";
    cin >> horas_trabalhadas;
    cout << "Infome quanto ganha por hora  =  ";
    cin >> porHora;
   
   float horaTrabalhadas = horas_trabalhadas * semana ;
   float resultado =  (horaTrabalhadas * semana) *    porHora;   
   cout << "Com base nas informações, calculo aproximado;";
   cout << "Nos " << semana << " uteis por semana" << " o trabalho rende" << " R$ : " << resultado << "\n\n"; 

    return 0;
}
