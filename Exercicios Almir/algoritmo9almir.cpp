// faça um algoritmo que receba uma sequencia de numeros finalizada pelo numero 0, calucle e imprima
// a soma dos numeros pares 
// a meida dos numeros impares 
//o percentual de numreros menores que 300
// a média dos numeros maiores que 25

#include <iostream>
using namespace std;

int main() {
    int numero;
    int somaPares = 0;
    int somaImpares = 0;
    int qtImpares = 0;
    int contMenores300 = 0;
    int totalNumeros = 0;
    int somaMaior25 = 0;
    int contMaior25 = 0;

    cout << "Digite uma sequencia de numeros (0 para finalizar): " << endl;
    cin >> numero;

    while (numero != 0) {
        totalNumeros++;


        if (numero % 2 == 0) {
            somaPares += numero;
        }

      
        if (numero % 2 != 0) {
            somaImpares += numero;
            qtImpares++;
        }

       
        if (numero < 300) {
            contMenores300++;
        }

        
        if (numero > 25) {
            somaMaior25 += numero;
            contMaior25++;
        }

        cin >> numero; 
    }

    cout << "Fim da sequencia." << endl;

    cout << "Soma dos numeros pares: " << somaPares << endl;

    if (qtImpares > 0) {
        cout << "Media dos numeros impares: " << somaImpares / qtImpares << endl;
    } else {
        cout << "Nenhum numero impar foi digitado." << endl;
    }

    if (totalNumeros > 0) {
        cout << "Percentual de numeros menores que 300: " << (contMenores300 * 100) / totalNumeros << "%" << endl;
    }

    if (contMaior25 > 0) {
        cout << "Media dos numeros maiores que 25: " << somaMaior25 / contMaior25 << endl;
    } else {
        cout << "Nenhum numero maior que 25 foi digitado." << endl;
    }

}


