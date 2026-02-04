//Elabore um programa c++, para ler uma matriz 4x4 calcula e imprima
//a soma dos valores impares armazenados na matriz.
//a quantidade de elementos menor que 100
//a media dos valores pares maiores que 30 armazenados na matriz.
//a soma dos valores das colunas (guarde a soma em um vetor)
//a media dos valores das linhas (guarde o resultado em um vetor)
//o maior e o menor valor armazenado

#include <iostream>
using namespace std;

void ProcessarMatriz() {
    int matriz[4][4];

    cout << "Digite os elementos da matriz 4x4:" << endl;
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++){
            cin >> matriz[i][j];
        }
    }

    int somaImpares = 0;

    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++){
            if(matriz[i][j] % 2 == 1){
                somaImpares += matriz[i][j];
            }
        }
    }
    cout << "A soma dos valores impares e: " << somaImpares << endl;

    int qtdMenor100 = 0;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(matriz[i][j] < 100) {
                qtdMenor100++;
            }
        }
    }
    cout << "A quantidade de elementos menor que 100: " << qtdMenor100 << endl;

    int somaPares30 = 0;
    int qtdPares30 = 0;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++) {
            if(matriz[i][j] % 2 == 0 && matriz[i][j] > 30) {
                somaPares30 += matriz[i][j];
                qtdPares30++;
            }
        }
    }
    if(qtdPares30 > 0)
    cout << "A media dos valores pares maiores que 30: " << somaPares30 / qtdPares30 << endl;
else
    cout << "Nenhum valor par maior que 30." << endl;

    float somaColunas[4] = {0};
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            somaColunas[j] += matriz[i][j];
        }
    }
    cout << "A soma dos valores das colunas:" << endl;
    for(int j=0; j<4; j++){
        cout << somaColunas[j] << " ";
    }
    cout << endl;

    float somalinhas[4] = {0};
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++) {
            somalinhas[i] += matriz[i][j];
        }
    }
    cout << "A media dos valores das linhas:" << endl;
    for(int i=0; i<4; i++){
        cout << somalinhas[i] / 4 << " ";
    }
    cout << endl;

    int Maiorvalor = matriz[0][0];
    int Menorvalor = matriz[0][0];

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(matriz[i][j] > Maiorvalor) {
                Maiorvalor = matriz[i][j];
            }
            if(matriz[i][j] < Menorvalor) {
                Menorvalor = matriz[i][j];
            }
        }
    }

    cout << "O maior valor armazenado e: " << Maiorvalor << endl;
    cout << "O menor valor armazenado e: " << Menorvalor << endl;
}

int main() {
    ProcessarMatriz();
}
