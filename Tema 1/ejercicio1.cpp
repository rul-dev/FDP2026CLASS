#include <iostream>
using namespace std;

int main() {
    // Declaración de variables para almacenar los números ingresados por el usuario
    int numero1, numero2;

    // Solicitar al usuario que ingrese dos números
    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;


    int suma = numero1 + numero2;

    cout << "La suma de " << numero1 << " y " << numero2 << " es: " << suma << endl;

    return 0;
}