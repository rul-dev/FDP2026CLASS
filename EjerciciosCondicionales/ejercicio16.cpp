//Autenticación con Intentos
//Simula un sistema de autenticación con un usuario y contraseña, permitiendo hasta 3 intentos.
#include <iostream>
using namespace std;

int main() {
    string usuario = "admin";
    string contrasena = "12345";
    int intentos = 3;
    string input_usuario, input_contrasena;

    // Pedimos al usuario que introduzca su nombre de usuario y contraseña
    while (intentos > 0) {
            cout << "Introduce tu nombre de usuario: " << endl;
        cin >> input_usuario;
        cout << "Introduce tu contraseña: " << endl;
        cin >> input_contrasena;

        // Verificamos el usuario y la contraseña
        if (input_usuario == usuario && input_contrasena == contrasena) {
            cout << "Verificación exitosa. Bienvenido, " << input_usuario << "." << endl;
            return 0;
        } else {
            intentos--;
            if (intentos > 0) {
                cout << "Nombre de usuario o contraseña incorrectos. Te quedan " << intentos << " intentos." << endl;
            }
        }
    }

    cout << "Has agotado todos los intentos. Acceso denegado." << endl;
    return 1;
}