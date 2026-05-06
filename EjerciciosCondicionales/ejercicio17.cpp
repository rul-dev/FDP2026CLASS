//Precio de Entrada a un Parque
//Un parque cobra diferente según la edad: niños menores de 5 entran gratis, entre 5 y 12 pagan $5, mayores de 12 pagan $10.
#include <iostream>
using namespace std;

int main() {
    int edad;
    double precio;

    // Pedimos al usuario que introduzca su edad
    cout << "Introduce tu edad: " << endl;
    cin >> edad;

    // Bloque para determinar el precio según la edad
    if (edad < 5) {
        precio = 0; // Entrada gratis
    } else if (edad <= 12) {
        precio = 5; // Pagan $5
    } else {
        precio = 10; // Pagan $10
    }

    // Mostramos el precio correspondiente
    cout << "El precio de la entrada es: $" << precio << endl;

    return 0;
}
