//Velocidad y Multa
//Pide la velocidad de un conductor. Si supera los 60 km/h, se le aplica una multa; si supera los 80 km/h, la multa es mayor.
#include <iostream>
using namespace std;

int main() {
    double velocidad;
    double multa;

    // Pedimos al usuario que introduzca la velocidad
    cout << "Introduce la velocidad del conductor (en km/h): " << endl;
    cin >> velocidad;

    // Bloque para determinar la multa según la velocidad
    if (velocidad > 80) {
        multa = 100; // Multa mayor
    } else if (velocidad > 60) {
        multa = 50; // Multa estándar
    } else {
        multa = 0; // Sin multa
    }

    // Mostramos la multa correspondiente
    cout << "La multa es de: $" << multa << endl;

    return 0;
}