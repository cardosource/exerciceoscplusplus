#include <iostream>
#include <new>
using namespace std;

float formula(float entrada){
    float resposta = (72.7*entrada) - 58;
    return resposta;

}


int main(){
  typedef struct pessoa{
    float altura;

};
    pessoa * ponteiropessoa = new  pessoa;
    float alt;
    cout << "Informe altura: ";
    cin >> alt;
    ponteiropessoa->altura= alt;
    float calc =  formula(ponteiropessoa->altura);
    cout << "peso ideal : " << calc << " Kl "<<"\n\n";

    return 0;
}