//Menú Interactivo
//Crea un menú que se repita hasta que el usuario elija la opción de salir.

#include <iostream>
using namespace std;

int main(){
    int opcion;
    do {
        cout << "Menú:" << endl;
        cout << "1. Opcion 1" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Elegiste la opcion 1." << endl;
                break;
            case 2:
                cout << "Elegiste la opcion 2." << endl;
                break;
            case 3:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opcion no valida. Intentalo de nuevo." << endl;
        }
    } while (opcion != 3);

    return 0;
}