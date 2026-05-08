#include <iostream>
using namespace std;

int main(){
    double salario, impuesto;
    int opcion;

    cout << "Ingresa tu salario mensual: \n";
    cin >> salario;

    if(salario <= 550){
        opcion = 1;
    } else if(salario > 550 && salario <= 895.24){
        opcion = 2;
    }else if(salario > 895.24 && salario <= 2038.11){
        opcion = 3;
    } else if(salario > 2038.11){
        opcion = 4;
    } else {
        cout << "Salario no válido." << endl;
        return 0;
    }
    //cout << opcion << endl;

    switch(opcion){
        case 1:
            cout << "No pagas impuestos: " << impuesto << endl;
            break;
        case 2:
            impuesto = salario * 0.10;
            cout << "El impuesto a pagar es: " << impuesto << endl;
            break;
        case 3:
            impuesto = salario * 0.20;
            cout << "El impuesto a pagar es: " << impuesto << endl;
            break;
        case 4:
            impuesto = salario * 0.30;
            cout << "El impuesto a pagar es: " << impuesto << endl;
            break;
        default:
            cout << "Opción no válida." << endl;

    }
}