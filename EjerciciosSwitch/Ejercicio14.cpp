#include <iostream>
using namespace std;

int main(){
    int edad;

    cout << "Ingresa tu edad: \n";
    cin >> edad;

    switch (edad){ 
        case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7:
        cout << "Categoria G" << endl;
        break;
        case 8: case 9: case 10: case 11: case 12: case 13:
        cout << "Categoria PG" << endl;
        break;
        case 14: case 15: case 16: case 17:
        cout << "Categoria PG-13" << endl;
        break;
        case 18: case 19: case 20: case 21:
        cout << "Categoria R" << endl;
        break;
        default:
            cout << "Edad no válida." << endl;
    }
    return 0;
}