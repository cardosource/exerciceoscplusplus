#include <iostream>

int main(){
    using namespace std;
    float metro;
    float resposta;
    cout << "infome a medida em metro  ";
    cin >> metro;
    resposta = metro*100;
    cout << metro << " metros  = "<< resposta << " centimetros\n";
    return 0;
}