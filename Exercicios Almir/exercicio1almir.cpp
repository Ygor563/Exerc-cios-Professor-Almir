//elabore um programa c++ que calcule e imprima o salario de 50 funcionarios.
//para cada funcionario deve ser informado o salario base.
//que ele tem 16% de gratificacao e paga 30% de imposto 
//ao final do algoritmo deve ser impresso o valor pago aos 50 funcionarios e o total de impostos que foi descontado desses funcionarios

#include <iostream>
using namespace std;

struct Funcionario {
    double salarioBase;
    double gratificacao;
    double imposto;
    double salarioFinal;
};

void funcionarios() {
    const int totalFuncionarios = 50;
    Funcionario f[50];

    double totalPago = 0.0;
    double totalImpostos = 0.0;

    for (int i = 0; i < totalFuncionarios; i++) {
        cout << "Digite o salario base do funcionario " << (i + 1) << ": ";
        cin >> f[i].salarioBase;

        if (f[i].salarioBase > 0) {
            f[i].gratificacao = f[i].salarioBase * 0.16;
            f[i].imposto = f[i].salarioBase * 0.30;
        } else {
            f[i].gratificacao = 0;
            f[i].imposto = 0;
        }

        f[i].salarioFinal =
            f[i].salarioBase +
            f[i].gratificacao -
            f[i].imposto;

        cout << "Salario final do funcionario " << (i + 1) << ": " << f[i].salarioFinal << endl;

        totalPago += f[i].salarioFinal;
        totalImpostos += f[i].imposto;
    }

    cout << "\nTotal pago aos 50 funcionarios: " << totalPago << endl;
    cout << "Total de impostos descontados: " << totalImpostos << endl;
}

int main() {
    funcionarios();
}

