#include <iostream>
using namespace std;
int main(){
    
    float fahrenheit;
    cout<< "Informe temperatura Fahrenheit :";
    
    cin >> fahrenheit;
    
    float resultado =  (fahrenheit-32) * 5/9;
    cout << fahrenheit << " °F  em" << " °C" <<
    " é " << resultado;
    
    return 0;
}
