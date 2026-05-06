//Edad y Mayoría de Edad
//Escribe un programa que pida la edad de una persona e indique si es mayor o menor de edad (18 años o más es mayor de edad).

#include <iostream>
using namespace std;

int main() {
    int edad;

    // Pedimos al usuario que introduzca su edad
    cout << "Introduce tu edad: " << endl;
    cin >> edad;

    // Bloque para determinar si la persona es mayor o menor de edad
    if (edad >= 18) {
        cout << "Eres mayor de edad" << endl;
    } else {
        cout << "Eres menor de edad" << endl;
    }

    return 0;
}