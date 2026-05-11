#include <iostream>
using namespace std;

int main() {
    int limite, suma = 0;

    cout << "Ingrese un numero: ";
    cin >> limite;

    cout << "Numeros pares encontrados: ";

    // Empezamos en 2 porque es el primer par
    int i = 2; 
    
    while (i <= limite) {
        // Imprimimos el número actual
        cout << i << " "; 
        // Lo acumulamos en la suma
        suma += i;
        // Saltamos directamente al siguiente par (+2)
        i += 2; 
    }

    cout << "\nLa suma total es: " << suma << endl;

    return 0;
}