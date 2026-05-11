#include <iostream>
using namespace std;

int main()
{
    int contador = 1;
    do
    {
        cout << "Contador en do-while: " << contador << endl;
        contador++;
    } while (contador <= 5);
    cout << "Salio del bucle";

    return 0;
}