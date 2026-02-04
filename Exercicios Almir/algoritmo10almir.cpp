//10. Faça um programa que leia uma lista de 40 números inteiros, não repetidos, e
//armazene-o em um vetor. A seguir, o programa deve ler uma lista de números
//terminada pelo número 0 (que não entrará nos cálculos). Para cada número da
//lista, o programa deve verificar se ele está no vetor. Ao final do programa, deve
//ser mostrado o número de vezes que cada número do vetor foi encontrado.

#include <iostream>
using namespace std;

int main() {
    int v[40];
    int cont[40] = {0};

    for (int i = 0; i < 40; i++) {
        int repetido;
        do {
            repetido = 0;
            cout << "Digite o " << i + 1 << " numero: ";
            cin >> v[i];

            for (int j = 0; j < i; j++) {
                if (v[i] == v[j]) {
                    repetido = 1;
                    cout << "Numero repetido! Digite outro.\n";
                }
            }
        } while (repetido == 1);
    }

    int num;
    cout << "\nDigite numeros para pesquisa (0 para encerrar):\n";
    cin >> num;

    while (num != 0) {
        for (int i = 0; i < 40; i++) {
            if (num == v[i]) {
                cont[i]++;
            }
        }
        cin >> num;
    }

    cout << "\nResultado:\n";
    for (int i = 0; i < 40; i++) {
        cout << "Numero " << v[i] << " foi encontrado " << cont[i] << " vezes\n";
    }
}

