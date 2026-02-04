 //Faça um programa em C/C++ que receba uma seqüência de números finalizada 
//pelo número 0, calcule e imprima:  
//• a média dos números menores que 300.   
//• o percentual de números maiores que 100;  
//• a média dos números pares; 
//• a soma dos números ímpares;

#include <iostream>
using namespace std;

void processarNumeros() {
    int numero;
    int somaMenores300 = 0, countMenores300 = 0;
    int countMaior100 = 0, countTotal = 0;
    int somaPares = 0, countPares = 0;
    int somaImpares = 0;

    cout << "Digite numeros (0 para finalizar):" << endl;

    while (true) {
        cout << "Numero: ";
        cin >> numero;
        if (numero == 0) break;

        countTotal++;

        if (numero < 300) { somaMenores300 += numero; countMenores300++; }
        if (numero > 100) countMaior100++;
        if (numero % 2 == 0) { somaPares += numero; countPares++; }
        else somaImpares += numero;
    }

    if (countMenores300 > 0)
        cout << "Media dos números menores que 300: " << (double)somaMenores300 / countMenores300 << endl;
    else
        cout << "Nenhum numero menor que 300 foi digitado." << endl;

    if (countTotal > 0)
        cout << "Percentual de numeros maiores que 100: " << (double)countMaior100 * 100 / countTotal << "%" << endl;
    else
        cout << "Nenhum numero foi digitado." << endl;

    if (countPares > 0)
        cout << "Media dos numeros pares: " << (double)somaPares / countPares << endl;
    else
        cout << "Nenhum numero par foi digitado." << endl;

    cout << "Soma dos numeros ímpares: " << somaImpares << endl;
}

int main() {
    processarNumeros(); 
}

