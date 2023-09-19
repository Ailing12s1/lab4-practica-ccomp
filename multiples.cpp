//Problema 01
#include <iostream>
using namespace std;

int main(){
    int suma = 0;

    for (int num = 1; num < 1000; num++){
        if (num % 3 == 0 || num % 5 == 0){
            suma += num;
        }
    }
    cout << "La suma de los múltiplos de 3 o 5 debajo de 1000 es: " << suma << endl;

    return 0; 
}