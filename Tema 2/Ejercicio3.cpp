#include <iostream>
#include <cmath>
using namespace std;

//Area de un circulo, luego determinar si el area es par o impar, ademas se utiliza el pleca a para emitir un sonido, ocupando pow para pontenciar y sacar el area

int main(){
    float radio, area;

    // Pedimos al usuario que introduzca el radio del circulo
    cout << "Introduce el radio del circulo: " << endl;
    cin >> radio;
    // Calculamos el area del circulo
    area = 3.14159 * pow(radio, 2);
    cout << "El area del circulo es: " << area << endl;
    // Indicamos si el area es par o impar
    if((int)area % 2 == 0){
        cout << "El area es par \a " << area << endl;
    } else {
        cout << "El area es impar \a  " << area << endl;
    }
    // Emitimos un sonido utilizando la pleca a
    cout << "\a" << endl;

    return 0;
}