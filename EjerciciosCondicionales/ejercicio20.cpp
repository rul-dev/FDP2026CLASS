//Sistema de Calificación de Conducción
//Un programa debe calificar el estado de un conductor según su edad, número de infracciones y años de experiencia.
#include <iostream>
using namespace std;

int main() {
    int edad, infracciones, experiencia;
    string calificacion;

    // Pedimos al usuario que introduzca su edad, número de infracciones y años de experiencia
    cout << "Introduce tu edad: " << endl;
    cin >> edad;
    cout << "Introduce el número de infracciones cometidas: " << endl;
    cin >> infracciones;
    cout << "Introduce tus años de experiencia como conductor: " << endl;
    cin >> experiencia;

    // Bloque para determinar la calificación del conductor
    if (edad < 18 || infracciones > 5 || experiencia < 1) {
        calificacion = "Peligroso";
    } else if ((edad >= 18 && edad <= 25) || (infracciones > 0 && infracciones <= 5) || (experiencia >= 1 && experiencia <= 3)) {
        calificacion = "Regular";
    } else {
        calificacion = "Seguro";
    }

    // Mostramos la calificación correspondiente
    cout << "Tu calificación como conductor es: " << calificacion << endl;

    return 0;
}