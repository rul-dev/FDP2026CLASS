//ingresar un numero y verificar es positivo, negativo o cero

#include <iostream>
using namespace std;

int main() {
    int z;

    // Pedimos al usuario que introduzca un numero
    cout << "Introduce un numero: " << endl;
    cin >> z;

    // Bloque para determinar si el numero es positivo, negativo o cero
    if (z > 0) {
        cout << "El numero es positivo" << endl;
    } else if (z < 0) {
        cout << "El numero es negativo" << endl;
    } else {
        cout << "El numero es cero" << endl;
    }

    return 0;
}