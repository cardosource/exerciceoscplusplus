#include <iostream>

int main(){
     float media=0.0;
     float nota = 0.0;

    for(int n=0;n < 4;n++){

        std::cout << "Informe a nota " << n << " : ";
        std:std::cin >> nota;
        media +=nota; 
    }
    std::cout << "Media nota bimestral: "<< media/4 << "\n";

    return 0;
}
