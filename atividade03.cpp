#include <iostream>

int main(){
    int numero1;
    int numero2;

    std::cout << "Digite um numero decimal : ";
    std::cin >> numero1;
    std::cout << "Informe outro numero decimal : ";
    std::cin >> numero2;

    std::cout << numero1 << " + " << numero2 << " = " << numero1+ numero2<<  "\n";
    return 0;
}