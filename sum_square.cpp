#include <iostream>
using namespace std;

int main(){
    int n = 100;
    long long sumacua = 0;
    for(int i = 1; i <= n; i++){
        sumacua += i*i;
    }
    long long suma = (n*(n+1))/2;
    long long cuasuma = suma * suma;

    long long resta = cuasuma - sumacua;

    cout << "La diferencia entre la suma de cuadrados y el cuadrado de la suma es: " << resta << endl;
    return 0;
}
