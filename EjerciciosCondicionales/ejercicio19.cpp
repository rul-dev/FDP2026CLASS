//Tarifa de Luz Eléctrica
//Calcula la tarifa según el consumo: menor a 100 kWh, tarifa baja; entre 100 y 200 kWh, tarifa media; más de 200 kWh, tarifa alta.
#include <iostream>
using namespace std;

int main() {
    double consumo;
    double tarifa;

    // Pedimos al usuario que introduzca el consumo
    cout << "Introduce el consumo de electricidad (en kWh): " << endl;
    cin >> consumo;

    // Bloque para determinar la tarifa según el consumo
    if (consumo < 100) {
        tarifa = 0.10; // Tarifa baja
    } else if (consumo <= 200) {
        tarifa = 0.15; // Tarifa media
    } else {
        tarifa = 0.20; // Tarifa alta
    }

    // Mostramos la tarifa correspondiente
    cout << "La tarifa es de: $" << tarifa << " por kWh" << endl;

    return 0;
}