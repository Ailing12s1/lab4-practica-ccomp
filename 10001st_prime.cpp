#include <iostream>
#include <cmath>
using namespace std;

bool primo(int num){
    if (num <= 3){
        return true;
    }
    if(num%2 == 0 || num%3 == 0){
        return false;
    }
    for (int i=5;i *i <= num; i+=6){
        if(num % i == 0 || num%(i+2) == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n = 10001;
    int contador = 0;
    int numero = 1;

    while (contador < n){
        numero++;
        if(primo(numero)){
            contador ++;
        }
    }
    cout << "El " << n << "numero primo es: " << numero << endl;
    return 0;
}