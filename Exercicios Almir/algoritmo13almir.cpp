//13. Para atingir-se o índice olímpico, são realizados vários torneios de corridas de 100
//metros. Leia o nome e o tempo de um atleta e apresente sua pontuação, segundo a
//tabela abaixo:
//T < 10 seg → 100 ptos
//T >= 10 e T <=13 seg → 70 ptos
//T > 13 Seg → 40 ptos

#include <iostream>
using namespace std;

void CalcularPontos() {

    string nome;
    float tempo;
    int pontos;

    cout<<"Digite o nome do atleta:"<<endl;
    cin>>nome;
    cout<<"Digite o tempo do atleta:"<<endl;
    cin>>tempo;

    if(tempo < 10){
        pontos = 100;
    }
    else if(tempo >=10 && tempo <=13){
        pontos=70;
    }
    else if (tempo >13){
        pontos = 40;
    }
    cout<<"O atleta "<<nome<<" fez o tempo de "<<tempo<<" segundos e ganhou "<<pontos<<" pontos."<<endl;
}

int main() {
    CalcularPontos();
}
