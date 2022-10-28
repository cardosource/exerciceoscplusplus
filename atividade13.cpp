#include <iostream>
#define valor 72.7
#include <string>

using namespace std;


struct alturaH {
 int alt;
};

float formula(float altura){
    float res =  (valor*altura) - 58;
    
    return res;
}
int main(){
    cout << "Digite a altura (masculino) : ";
    alturaH *ponteiroAlt = new alturaH;
    float alturaInformar=0;

    cin >> alturaInformar;
    ponteiroAlt -> alt = alturaInformar;
    float resposta = formula(ponteiroAlt->alt);
    cout << resposta << "\n\n";
    return 0;
}