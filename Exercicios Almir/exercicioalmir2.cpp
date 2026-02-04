#include <iostream>
using namespace std;

struct Pessoa {
    int idade;
};

int totalIdade = 0;

void pessoas() {
    int M;
    cout << "Digite o numero de pessoas: ";
    cin >> M;

    if (M <= 0) {
        cout << "Número inválido de pessoas." << endl;
        return;
    }

    for (int i = 0; i < M; i++) {
        Pessoa p;
        cout << "Digite a idade da pessoa " << (i + 1) << ": ";
        cin >> p.idade;
        totalIdade += p.idade;
    }

    int media = totalIdade / M; 
    cout << "A média de idade é: " << media << endl;
}

int main() {
    pessoas();
}
