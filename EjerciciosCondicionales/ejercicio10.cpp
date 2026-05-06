// Calculadora de Tarifa de Envío
// Pide el peso de un paquete y cobra $5 si pesa hasta 5kg, $10 si pesa entre 6kg y 10kg, y $15 si pesa más de 10kg.
// y añade una validacion que si el numero es negativo o no es un numero, muestre un mensaje de error y no realice el calculo de la tarifa.
#include <iostream>
using namespace std;

int main()
{
    double peso;
    double tarifa;
    int billetera = 500;

    // Pedimos al usuario que introduzca el peso del paquete
    cout << "Introduce el peso del paquete (en kg): " << endl;
    cin >> peso;

    // Validación para verificar si el peso es un número válido y no es negativo
    if (cin.fail() || peso < 0)
    {
        cout << "Error: Por favor, introduce un número válido y no negativo para el peso." << endl;
        return 1; // Salimos del programa con un código de error
    }
    else
    {
        if (peso <= 5 && peso >= 0)
        {
            tarifa = 5;
            billetera -= tarifa; // Restamos la tarifa de la billetera
        }
        else if (peso <= 10 && peso > 5)
        {
            tarifa = 10;
            billetera -= tarifa; // Restamos la tarifa de la billetera
        }
        else
        {
            tarifa = 15;
            billetera -= tarifa; // Restamos la tarifa de la billetera
        }
    }

    // Bloque para determinar la tarifa según el peso

    // Mostramos la tarifa correspondiente
    cout << "La tarifa de envío es: $" << tarifa << endl;
    cout << "La billetera actual es: $" << billetera << endl;

    return 0;
}