//Doble Verificación de Datos
//Pide dos contraseñas y verifica si coinciden antes de continuar.
#include <iostream>
#include <string>
using namespace std;


int main() {
    string contraseña1, contraseña2;

    // Pedimos al usuario que introduzca la primera contraseña
    cout << "Introduce la primera contraseña: " << endl;
    cin >> contraseña1;

    // Pedimos al usuario que introduzca la segunda contraseña
    cout << "Introduce la segunda contraseña: " << endl;
    cin >> contraseña2;

    // Bloque para verificar si las contraseñas coinciden
    if (contraseña1 == contraseña2) {
        cout << "Las contraseñas coinciden. Continuando..." << endl;
    } else {
        cout << "Las contraseñas no coinciden. Por favor, inténtalo de nuevo." << endl;
    }

    return 0;
}