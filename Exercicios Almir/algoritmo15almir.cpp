//15. Leia m e n e calcule a soma de todos os números ímpares entre n e m

#include <iostream>
using namespace std;

void Calcular() {
    int m, n, soma= 0;
    cout<<"Digite o valor de m:"<<endl;
    cin>>m;
    cout<<"Digite o valor de n:"<<endl;
    cin>>n;
    if(m<n){
        for(int i=m; i<n; i++){
            if(i%2 !=0){
                soma = soma + i;
            }
        }
    }else if (n<m) {
        for(int i=n; i<m; i++){
            if(i%2 !=0){
                soma = soma + i;
            }
        }
    }
    cout<<"A soma dos numeros impares entre m e n:"<<soma<<endl; 
}

int main() {
    Calcular();
}