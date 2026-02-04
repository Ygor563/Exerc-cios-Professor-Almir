//14. Calcular a soma dos 30 primeiros termos das seqüências:
//a) 1 – 1/2 + 1/4 – 1/6 + 1/8 . . .
//b) 63 + 61 + 59 / 2 + 57 / 3 + . . .
//c) 480/10 – 475 / 11 + 470 / 12 ....

#include <iostream>
using namespace std;

void Calcularsoma() {
    float soma1 = 0.0, soma2 = 0.0, soma3 = 0.0;

    for (int i = 0; i < 30; i++) {

        float denom_a;
        if (i == 0) {
            denom_a = 1;        
        } else {
            denom_a = i * 2;    
        }

        if (i % 2 == 0) {
            soma1 += 1.0 / denom_a;
        } else {
            soma1 -= 1.0 / denom_a;
        }
        
        soma2 += (63 - 2 * i) / (i + 1.0);

        if (i % 2 == 0) {
            soma3 += (480 - 5 * i) / (10 + i);
        } else {
            soma3 -= (480 - 5 * i) / (10 + i);
        }
    }

    cout << "Soma da sequencia a: " << soma1 << endl;
    cout << "Soma da sequencia b: " << soma2 << endl;
    cout << "Soma da sequencia c: " << soma3 << endl;
}

int main() { 
    Calcularsoma();
}
