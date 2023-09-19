#include <iostream>
using namespace std;

int main(){
    int suma = 0;
    int a = 1;
    int b = 2;

    while (b <= 4000000){
        if (b % 2 == 0){
            suma += b;
        }
        int temporal = a+b;
        a = b;
        b = temporal;
    }
    cout << "La suma de los términos pares de Fibonacci por debajo de 4 millones es: " << suma << endl;
    return 0;
}