#include <iostream>
using namespace std;

int main(){
    long long numero = 600851475143;
    long long factor = 2;

    while (numero > 1){
        if (numero % factor == 0){
            numero /= factor;
        }
        else{
            factor++;
        }
    }
    cout << "El factor primo mas grande de 600851475143 es: " << factor << endl;
    return 0;
}