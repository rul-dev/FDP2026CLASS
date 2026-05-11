//Cuenta Regresiva
//Solicita un número y muestra una cuenta regresiva hasta 0.

#include <iostream>
using namespace std;

int main()
{
    int contador;
    cout << "Ingrese un numero para la cuenta regresiva: \n";
    cin >> contador;
    do
    {
        cout << "Contador en do-while: " << contador << endl;
        contador--;
    } while (contador >= 0);
    cout << "Salio del bucle";

    return 0;
}