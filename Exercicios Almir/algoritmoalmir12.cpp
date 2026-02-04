//Elabore um algoritmo que leia uma matriz D 5x5 quadrada e calcule a media dos valores
//armazenados na diagonal principal e a soma dos valores armazenados na diagonal secundaria.

#include <iostream>
using namespace std;

int matriz[5][5], i, j;

void Matriz5x5() {
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            cout<<"Digite os elementos da matriz ["<<i<<"]["<<j<<"] : "<<endl;
            cin>>matriz[i][j];
        }
    }
}

void MediaDiagonalPrincipal() {
    int soma=0;
    float media;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(i==j){
                soma=soma+matriz[i][j];
                cout<<"Diagonal Principal: "<<matriz[i][j]<<endl;
            }
        }
    }
    media = soma/5.0;
    cout<<"Media da Diagonal Principal: "<<media<<endl;
}

void SomaDiagonalSecundaria() {
    int soma=0;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if((i+j)==4){
                soma = soma + matriz[i][j];
            }
        }
    }
    cout<<"Soma da Diagonal Secundaria: "<<soma<<endl;
}

int main() {
    Matriz5x5();
    MediaDiagonalPrincipal();
    SomaDiagonalSecundaria();
}