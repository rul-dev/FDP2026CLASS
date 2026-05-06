#include <iostream>
using namespace std;

int main() {
    // Declaración de variables para almacenar los números ingresados por el usuario
    double numero1;

    // Solicitar al usuario que ingrese tres números
    cout << "Ingrese los grados Celsius: ";
    cin >> numero1;
    
    double conversion = (numero1 * 9/5) + 32;
    cout << "La temperatura en grados Fahrenheit es: " << conversion << endl;
    return 0;
}