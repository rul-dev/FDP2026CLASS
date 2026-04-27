//Determine la temperatura del agua en grados celsisus y determine si el agua esta fria templada o caliente
#include <iostream>
using namespace std;

int main() {
    float temperatura;

    // Pedimos al usuario que introduzca la temperatura del agua en grados Celsius
    cout << "Introduce la temperatura del agua en grados Celsius: " << endl;
    cin >> temperatura;

    // Bloque para determinar si el agua esta fria, templada o caliente
    if (temperatura < 15) {
        cout << "El agua esta fria" << endl;
    } else if (temperatura >= 15 && temperatura <= 25) {
        cout << "El agua esta templada" << endl;
    } else {
        cout << "El agua esta caliente" << endl;
    }

    return 0;
}