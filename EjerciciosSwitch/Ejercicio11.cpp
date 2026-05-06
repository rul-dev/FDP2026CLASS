//Calculadora avanzada, mejora la calculadora agregando ^ para potencia y % para módulo.
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //Declaramos las variables necesarias para la calculadora
    double num1,num2, resultado;
    char operacion;

    cout << "Elige una operacion (+, -, *, /, ^, %): \n";
    cin >> operacion;


    //Solicitamos al usuario que ingrese los dos numeros para la operacion
    cout << "Pon el primer numero: \n";
    cin >> num1;
    cout << "Pon el segundo numero: \n";
    cin >> num2;

    //Usamos un switch para determinar la operacion a realizar
    switch (operacion)
    {    case '+':
        resultado = num1 + num2;
        cout << "El resultado es: " << resultado << endl;
        break;
    case '-':
        resultado = num1 - num2;
        cout << "El resultado es: " << resultado << endl;
        break;
    case '*':
        resultado = num1 * num2;
        cout << "El resultado es: " << resultado << endl;
        break; 
    case '/':
        if (num2 != 0) {
            resultado = num1 / num2;
            cout << "El resultado es: " << resultado << endl;
        } else {
            cout << "Error: No se puede dividir por cero." << endl;
        }
    case '^':
    // Para la potencia, usamos la función pow de la biblioteca cmath
        resultado = pow(num1, num2);
        cout << "El resultado es: " << resultado << endl;
        break;
    case '%':
    // Para el módulo, usamos la función fmod de la biblioteca cmath, que devuelve el resto de la división de num1 entre num2
        if (num2 != 0) {
            resultado = fmod(num1, num2);
            cout << "El resultado es: " << resultado << endl;
        } else {
            cout << "Error: No se puede calcular el módulo por cero." << endl;
        }
        break;
    default:
        // Si el usuario ingresa una operación no válida, mostramos un mensaje de error
        cout << "Operación no válida." << endl;
    }
    return 0;

}