#include <iostream>
#include <vector>
using namespace std;

long long sumaprimos(int n){
    vector <bool> primo (n, true);
    long long suma = 0;

    for (int p = 2; p*p < n; p++){
        if (primo[p]){
            for (int i = p*p; i < n; i+=p){
                primo[i] = false;
            }
        }
    }
    for (int p=2; p < n; p++){
        if(primo[p]){
            suma += p;
        }
    }
    return suma;
}
int main() {
    int limite = 2000000;
    long long resultado = sumaprimos(limite);
    
    cout << "La suma de todos los números primos por debajo de " << limite << " es: " << resultado << endl;
    
    return 0;
}