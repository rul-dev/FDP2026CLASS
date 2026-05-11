//Serie de Fibonacci
//Muestra los primeros N términos de la serie de Fibonacci utilizando while. y ponle nombres de variables entendibles
#include <iostream>
using namespace std;

int main(){
    int numero = 0, siguiente = 1, termino, contador = 1;
    cout << "Ingrese el numero de terminos de la serie de Fibonacci: \n";
    cin >> termino;
    cout << "Serie de Fibonacci: ";
    while(contador <= termino){
        cout << numero << " ";
        int temp = numero; // Guardamos el valor actual de numero
        numero = siguiente; // Actualizamos numero al siguiente término
        siguiente = temp + siguiente; // Calculamos el nuevo siguiente término
        contador++; // Incrementamos el contador
    }

    

    return 0;
}