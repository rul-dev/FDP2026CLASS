//Verificación de Usuario y Contraseña
//Simula la verificación de un usuario y contraseña predefinidos.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string usuario = "admin";
    string contraseña = "12345";

    string input_usuario, input_contraseña;

    // Pedimos al usuario que introduzca su nombre de usuario y contraseña
    cout << "Introduce tu nombre de usuario: " << endl;
    cin >> input_usuario;
    cout << "Introduce tu contraseña: " << endl;
    cin >> input_contraseña;

    // Bloque para verificar el usuario y la contraseña
    if (input_usuario == usuario && input_contraseña == contraseña) {
        cout << "Verificación exitosa. Bienvenido, " << input_usuario << "." << endl;
    } else {
        cout << "Nombre de usuario o contraseña incorrectos." << endl;
    }

    return 0;
}