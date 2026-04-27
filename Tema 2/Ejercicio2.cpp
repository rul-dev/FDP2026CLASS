#include <iostream>
using namespace std;
//Solicitar un numero entero, una vez recibido el numero detectar si es par o impar, ademas se utiliza el pleca a para emitir un sonido 

int main() {
    int x;

    // Pedimos al usuario que introduzca un numero entero
    cout << "Introduce un numero entero: " << endl;
    cin >> x;

    // Indicamos si el numero es par o impar
    if(x % 2 == 0){
        cout << "El numero es par \a " << x << endl;
    } else {
        cout << "El numero es impar \a  " << x << endl;
    }
    
    // Emitimos un sonido utilizando la pleca a
    cout << "\a" << endl;

    return 0;
}