//Suma de Números
//Pide al usuario números hasta que ingrese 0. Luego, muestra la suma de todos los números ingresados.
#include <iostream>
using namespace std;

int main(){
    int numero, suma =0;
    cout << "Ingrese un numero: \n";
    cin >> numero;

    while(numero != 0){
        suma += numero;
        cout << "Ingrese un numero: \n";
        cin >> numero;
    }

    cout << "La suma de los numeros ingresados es: " << suma << endl;

    return 0;
}