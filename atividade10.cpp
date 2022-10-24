#include <iostream>
using namespace std;

float formula(float temperatura){
  
     float resposta = (temperatura * 9/5) + 32;
     return resposta;
}
int main(){
    float fahrenheit;
    cout<< "Informe a temperatura em °C   : ";
    cin >> fahrenheit;
    float calc = formula(fahrenheit);
    cout << "°C " << fahrenheit << " : " << "°F " << calc << "\n\n"; 
    return 0;
}