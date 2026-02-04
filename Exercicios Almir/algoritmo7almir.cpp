//elabore um algoritmo que verifique e mostre numeros entre 1000 e 2000 (inclusive) que , quando divididos por 11, produzam resto 5.

#include <iostream>
using namespace std;

int ler;

void Verificarnumeros() {
    cout << "Digite numeros entre 1000 e 2000:" << endl;
    cin >> ler;

    if (ler >= 1000 && ler <= 2000 && ler % 11 == 5) {
        cout << "Isso!, O resultado e: " << ler << endl;
    }
    else if (ler < 1000 || ler > 2000) {
        cout << "Numero invalido, Tente novamente." << endl;
        Verificarnumeros();
    }
    else {
        cout << "Numero valido, mas nao produz resto 5 ao dividir por 11." << endl;
        Verificarnumeros();
    }
}

int main() {
    Verificarnumeros();
}


