#include <iostream>
#include <string>
#include <new>
using namespace std;

struct salario{
     double salario_bruto;
     double ir;
     double inss;
     double sindicato;
     double salario_liquido;
   struct salario *proximo;
};


int tamanho(salario *s){
      if(s->salario_bruto == 0){
        return 0;
    }
     int contar=0;
      salario *p = new salario;
       while(p != NULL){
           p = p->proximo;
           contar+=1;
        }
       return contar; 
 }


void atribuir(salario *&p, double  horaG, double horasT){
      double f1  = (horaG * 5) * horasT;
      double inssF  = f1 *  0.8;
      double irrfF   = f1 * 0.011;
      double sinF   = f1 *  0.5;
      double calculo = f1 - (inssF -irrfF - sinF);
      salario *desc = new salario;
      desc->salario_bruto = f1;
      (*desc).ir   = 11;
      (*desc).inss = 8;
      (*desc).sindicato = 5;
       desc->salario_liquido = calculo;

      if( p->salario_bruto == 0){
           desc->proximo= NULL;
      }else{
         desc->proximo = p;
       }
         p = desc;
  }


void imprimir(salario *p){
     salario *a = p;
     while(a != NULL){
        cout << "Salario Bruto   : "  << a->salario_bruto   << "\n"  <<
                "IRRF            : "  << a->ir        <<      " %"   << "\n" <<
                "Inss            : "  << a->inss      <<      "  %"  << "\n" <<
                "sindicato       : "  << a->sindicato <<      "  %"  << "\n" <<
                "Salario Liquido : "  << a->salario_liquido << "\n"  <<
                "---------------------------------------------\n";
                 a = a->proximo;
           }
    }
int main(void){
   salario *i = new  salario;
   
   i->salario_bruto = 0;
   i->ir = 0;
   i->inss = 0;
   i->sindicato = 0;
   i->salario_liquido = 0;
   i->proximo = NULL; 

double horasPaga;
double horasTrabalhada;
int continuar =0;

cout << "---------------------------------------------\n";
     cout << "Digite quanto ganha por hora (R$) :";
     cin >> horasPaga;
cout << "---------------------------------------------\n";
     cout << "Digite quantidade de horas trabalhada ao mes (Hr) :";
     cin >> horasTrabalhada;
cout << "---------------------------------------------\n";
 atribuir(i,horasPaga, horasTrabalhada);
//cout << "\n";
if(tamanho(i) == 0 ){
    cout << "----------------\n";
    cout << "* Sem registro *\n";
    cout << "----------------\n";
}else{
   imprimir(i);
} 
return 0;

}
