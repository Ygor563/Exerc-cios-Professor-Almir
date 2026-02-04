//faça um programa em c++ que leia o nome do morador e a quantidade,de consumo de agua gasto por 5 apartamentos durante um mes.
//armazene os dados em dois vetores (vNome, vCons). depois da leitura o algoritmo deve
// imprimir o nome dos moradores que consumiram mais de 30ms cubicos.
//calcular a media de consumo dos moradores que consumiram menos de 100 mts cubicos mensais;
//classificar os valores em ordem descresente de consumo



#include <iostream>
using namespace std;

void Ordenarconsumo() {

    string vNome[5];
    float vCons[5], soma = 0, media = 0;
    int i, j, cont = 0;

    for(i=0; i<5; i++){
    cout << "Digite o nome do morador:"<<endl;
    cin>>vNome[i];
    
    cout << "Digite o consumo de agua em metros cubicos:"<<endl;
    cin>>vCons[i];
    }
    
    
    cout << "\nMoradores que consumiram mais de 30 metros cubicos:\n";
    for (i = 0; i < 5; i++) {
        if (vCons[i] > 30) {
            cout << vNome[i] << endl;
        }
    }

    
    for (i = 0; i < 5; i++) {
        if (vCons[i] < 100) {
            soma = soma + vCons[i];
            cont = cont + 1;
        }
    }

    if (cont > 0) {
        media = soma / cont;
        cout << "\nMedia de consumo (<100 m3): " << media << endl;
    }

    
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (vCons[i] < vCons[j]) {

                float auxCons = vCons[i];
                vCons[i] = vCons[j];
                vCons[j] = auxCons;

                string auxNome = vNome[i];
                vNome[i] = vNome[j];
                vNome[j] = auxNome;
            }
        }
    }

    cout << "\nConsumo em ordem decrescente:\n";
    for (i = 0; i < 5; i++) {
        cout << vNome[i] << " - " << vCons[i] << " m3\n";
    }
}

int main() {
    Ordenarconsumo();
}
