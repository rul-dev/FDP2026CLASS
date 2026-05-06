#include <iostream>
using namespace std;

int main(){
    //Declaromos la variable para el puntaje
    int puntaje;

    //Solicitamos al usuario que ingrese su puntaje
    cout << "Ingresa tu puntaje (1-5 estrellas): " << endl;
    cin >> puntaje;

    //Usamos un switch para determinar el mensaje a mostrar según el puntaje ingresado
    switch (puntaje) {
        case 1:
            cout << "Puntaje: 1 estrella - Muy malo" << endl;
            break;
        case 2:
            cout << "Puntaje: 2 estrellas - Malo" << endl;
            break;
        case 3:
            cout << "Puntaje: 3 estrellas - Regular" << endl;
            break;
        case 4:
            cout << "Puntaje: 4 estrellas - Bueno" << endl;
            break;
        case 5:
            cout << "Puntaje: 5 estrellas - Excelente" << endl;
            break;
        default:
            cout << "Puntaje no válido. Por favor ingresa un número entre 1 y 5." << endl;
    }
    return 0;
}