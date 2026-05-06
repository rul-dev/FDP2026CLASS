#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Pon un numero del 1 al 7: \n";
    cin >> num;
    // Validar si es numero valido
    switch (num)
    {
    case 1:
        cout << "Lunes \n";
        break;
    case 2:
        cout << "Martes \n";
        break;
    case 3:
        cout << "Miercoles \n";
        break;
    case 4:
        cout << "Jueves \n";
        break;
    case 5:
        cout << "Viernes \n";
        break;
    case 6:
        cout << "Sabado \n";
        break;
    case 7:
        cout << "Domingo \n";
        break;
    default:
        cout << "No es un numero valido";
    }

    return 0;
}