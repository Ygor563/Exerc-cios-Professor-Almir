//Elabore um Algoritmo que leia uma matriz p 5x5 e informe se a mesma e
//simetrica ou nao obs: para uma matriz ser simetrica os elementos a[i,j] = a[j,i]

#include <iostream>
using namespace std;

int matriz[5][5], i, j;

void LerMatriz () {
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            cout<<"Digite os elementos da matriz ["<<i<<"]["<<j<<"] : "<<endl;
            cin>>matriz[i][j];
        }
    }
}

void CompararSimetria() {
    int simetrica = 1;

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(matriz[i][j] != matriz[j][i]){
                simetrica = 0;
            }
        }
    }

    if(simetrica == 1){
        cout<<"A matriz e simetrica"<<endl;
    }
}

void VerificarSimetria() {
    int naoSimetrica = 0;

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(matriz[i][j] != matriz[j][i]){
                naoSimetrica = 1;
            }
        }
    }

    if(naoSimetrica == 1){
        cout<<"A matriz nao e simetrica"<<endl;
    }
}

int main() {
    LerMatriz();
    VerificarSimetria();
    CompararSimetria();
}
