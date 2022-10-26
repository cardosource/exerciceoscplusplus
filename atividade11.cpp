#include <iostream>
#include <ostream>
#include <math.h>

using namespace  std;

int main(){
    int entrada1;
    cout << "1 - Digite numero inteiro : ";
    cin >> entrada1;
    int entrada2;
    cout << "2 - Digite um novo numero inteiro : ";
    cin >> entrada2;
    cout << "----------------------------------\n";
    int dobroPrimero = entrada1 *2;
    float metadadeSegundo =  entrada2 /2;
    cout << "Primeiro numero informado, dobro : "<<dobroPrimero;
    cout << "\n";
    cout << "Segundo numero informado, metade : "<<metadadeSegundo << "\n"<< endl;
    float respostaSegunda = dobroPrimero / entrada2;
    cout << "Dobro do primeiro numero informado, dividido pelo valor do segundo numero informado";
    cout << "Numero real com o uso dela : "<< respostaSegunda << "\n" << endl;
    cout << "----------------------------------\n";
    cout << "a soma do triplo do primeiro com o terceiro : ";
    cout << "resposta : " << entrada1*3 + respostaSegunda << "\n\n";
    cout << "o terceiro elevado ao cubo :";
    float resp = pow(respostaSegunda,4);
    cout << "resposta : " << respostaSegunda << "  "<< "elevado ao cubo "<< resp << "\n\n";





    return 0;
}