#include <iostream>
using namespace std;

int main(){
    int palindromo = 0;

    for (int i = 100; i < 1000; i++){
        for (int j = 100; j < 1000; j++){
            int producto = i*j;
            int ori = producto;
            int palindroma = 0;

            while (producto > 0){
                int digito = producto % 10;
                palindroma = palindroma*10+digito;
                producto /= 10;
            }
            if (ori == palindroma && ori > palindromo){
                palindromo = ori;
            }
        }
    }
    cout << "El palindromo mas grade a partir del producto de dos numeros es: " << palindromo << endl;
    return 0;
}