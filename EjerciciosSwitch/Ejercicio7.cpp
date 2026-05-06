#include <iostream>
using namespace std;

int main()
{

    int opcion;
    double pisto, monto;

    cout << "Pon tu dinero en USD: \n";
    cin >> pisto;

    cout << "Pon una opcion de conversion: \n1. EUR, \n2. JPY,\n3. GBP\n";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        monto = pisto * 0.85512;
        cout << "El dinero convertido es: \n"
             << monto<< "Euros";
        break;
    case 2:
        monto = pisto * 157.2305;
        cout << "El dinero convertido es: \n"
             << monto<< "Euros";
        break;
    case 3:
        monto = pisto * 0.738945;
        cout << "El dinero convertido es: \n"
             << monto<< "Euros";
        break;
    default:
        cout << "No es una opcion valida\n";
        break;
    }
    return 0;
}