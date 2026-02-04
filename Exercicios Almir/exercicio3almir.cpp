 //Faça um programa em C/C++ que calcule e imprima a seguinte soma:  3/99 - 
//32/98 + 33/97 - . . .399/1

#include <iostream>
using namespace std;

int main() {
    double soma = 0.0;
    int numerador = 3;
    int denominador = 99;
    int sinal = 1;

    while (denominador >= 1) {
        soma += sinal * (double)numerador / denominador;
        numerador++;
        denominador--;
        sinal = -sinal; 
    }

    cout << "O resultado da soma é: " << soma << endl;
}

