#include <iostream>
using namespace std;

long long mcd(long long a, long long b){
    while(b != 0){
        long long temporal = b;
        b = a % b;
        a = temporal;
    }
    return a;
}

int main(){
    long long resultado = 1;
    for (int i = 2; i <= 20; i++){
        resultado = (resultado * i)/mcd(resultado, i);
    }
    cout << "El número mas pequeño divisible por todos los numeros del 1 al 20 es: " << resultado << endl;
    return 0;
}
