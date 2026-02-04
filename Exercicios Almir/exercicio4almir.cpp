 //Faça um programa em C/C++ para calcular a área de um triângulo retângulo. Esse 
//programa não pode permitir a entrada de dados inválidos, ou seja, medidas 
//menores ou iguais a 0.

#include <iostream>
using namespace std;

struct Triangulo {
    double base;
    double altura;
};

void calculo() {
    Triangulo t;

    cout << "Digite a base do triângulo: ";
    cin >> t.base;

    cout << "Digite a altura do triângulo: ";
    cin >> t.altura;

    if (t.base <= 0 || t.altura <= 0) {
        cout << "Medidas inválidas. A base e a altura devem ser maiores que 0." << endl;
    } else {
        double area = (t.base * t.altura) / 2;
        cout << "A área do triângulo é: " << area << endl;
    }
}

int main() {
    calculo();
}
