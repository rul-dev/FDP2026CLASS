//Calificación Aprobatoria
//Solicita una calificación numérica y muestra si el estudiante aprobó o reprobó (mínimo aprobatorio: 60).
#include <iostream>
using namespace std;

int main() {
    int calificacion;

    // Pedimos al usuario que introduzca la calificación
    cout << "Introduce la calificación: " << endl;
    cin >> calificacion;

    // Bloque para determinar si el estudiante aprobó o reprobó
    if (calificacion >= 60) {
        cout << "El estudiante aprobó." << endl;
    } else {
        cout << "El estudiante reprobó." << endl;
    }

    return 0;
}