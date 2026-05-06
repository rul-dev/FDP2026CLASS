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

    //Operaciones matemáticas
    int suma = numero1 + numero2;
    int resta = numero1 - numero2;
    int multiplicacion = numero1 * numero2;
    int division = numero1 / numero2;

    // Mostrar los resultados
    cout << "La suma de " << numero1 << " y " << numero2 << " es: " << suma << endl;
    cout << "La resta de " << numero1 << " y " << numero2 << " es: " << resta << endl;
    cout << "La multiplicacion de " << numero1 << " y " << numero2 << " es: " << multiplicacion << endl;
    cout << "La division de " << numero1 << " y " << numero2 << " es: " << division << endl;

    return 0;
}