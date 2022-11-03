#include <cmath>
#include <iostream>
#include <math.h>  
using namespace std;

int main(){
    float quadrado =0;
    cout << "infome o tamanho do quadrado : ";
    cin >> quadrado;
    int resposta_quadrado = pow(quadrado,2);
    cout << "Quadrado : " << resposta_quadrado << "\n" <<
    "Dobro do quadrado : " << resposta_quadrado *2 << "\n";
    return 0;
}
