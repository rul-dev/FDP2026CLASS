//Comparación de Números
//Pide dos números e indica cuál es mayor, cuál es menor o si son iguales.
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Pedimos al usuario que introduzca dos números
    cout << "Introduce el primer número: " << endl;
    cin >> num1;
    cout << "Introduce el segundo número: " << endl;
    cin >> num2;

    // Bloque para comparar los números
    if (num1 > num2) {
        cout << "El primer número es mayor que el segundo." << endl;
    } else if (num1 < num2) {
        cout << "El primer número es menor que el segundo." << endl;
    } else {
        cout << "Los dos números son iguales." << endl;
    }

    return 0;
}