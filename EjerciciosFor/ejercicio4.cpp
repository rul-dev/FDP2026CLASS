// Tabla de Multiplicar
// Pide un número al usuario y muestra su tabla de multiplicar del 1 al 10.

#include <iostream>
using namespace std;

int main()
{
    int dato;
    cout << "Ingrese un numero: " << endl;
    cin >> dato;

    cout << "Tabla de multiplicar: " << endl;
    for (int i=1;i<=10;i++){
        
        cout<<dato <<"x"<< i <<" = "<< dato*i<< endl;
    }
    return 0;
}