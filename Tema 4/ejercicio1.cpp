#include <iostream>
using namespace std;

int main(){
    int contador;

    cout << "Ingrese un numero para iniciar el contador: ";
    cin >> contador;
    
    while (contador <= 5){
        cout << "Contador en while: " << contador << endl;
        contador++;
    }
    return 0;
}