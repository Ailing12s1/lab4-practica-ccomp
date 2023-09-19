#include <iostream>
using namespace std;

int main(){
    int suma = 1000;
    int a, b, c;

    for (a= 1; a < suma/3; a++){
        for (b=a+1; b < suma/2; b++){
            c = suma - a - b;
            if (a*a+b*b==c*c){
                long long producto = a*b*c;
                cout << "a= " << a << ", b= " << b << ", c= " << c << endl;
                cout << "El producto de abc es: " << producto << endl;
                return 0;
            }
        }
    }
    cout << "No se encontro respuesta." << endl;
    return 0;
}