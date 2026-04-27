#include <iostream>
#include <cmath>
using namespace std;
//Escribe un programa que pida al usuario un numero y su potencia, y calcule el resultado de elevar el numero a esa potencia. El programa debe indicar si el resultado es par o impar.

int main() {

    int y,x;

    // Pedimos al usuario que introduzca un numero y su potencia 
    cout << "Introduce un numero: " << endl;
    cin >> x;

    cout << "Introduce la potencia: " << endl;
    cin >> y;

    //Calculamos el resultado de elevar el numero a esa potencia
    x  = pow(y, y);
    cout << "El resultado de elevar el numero a esa potencia es: " << x << endl;
    

    

    // Indicamos si el resultado es par o impar
    if(x % 2 == 0){
        cout << "El resultado es par " << x << endl;
    } else {
        cout << "El resultado es impar " << x << endl;
    }
    //Bloque para determinar si es positivo o negativo

    if (y > 0) {
        cout << "El resultado es positivo" << endl;
    } else if (y < 0) {
        cout << "El resultado es negativo" << endl;
    } else {
        cout << "El resultado es cero" << endl;
    }
}