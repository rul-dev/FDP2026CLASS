#include <iostream>
using namespace std;

int main() {
    // Declaración de variables para almacenar los números ingresados por el usuario
    double numero1, numero2, numero3;

    // Solicitar al usuario que ingrese tres números
    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;
    cout << "Ingrese el tercer numero: ";
    cin >> numero3;

    // Calcular el promedio de los tres números
    double resultado = (numero1 + numero2 + numero3) / 3;
    cout << "El promedio de " << numero1 << ", " << numero2 << " y " << numero3 << " es: " << resultado << endl;
    return 0;
}