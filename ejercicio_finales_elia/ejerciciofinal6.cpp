//elias ruben
#include <iostream>
using namespace std;

int main() {

    float numero1, numero2, numero3, numero4, numero5, referencia;
    cout << "Introduce el primer numero: ";
    cin >> numero1;
    cout << "Introduce el segundo numero: ";
    cin >> numero2;
    cout << "Introduce el tercer numero: ";
    cin >> numero3;
    cout << "Introduce el cuarto numero: ";
    cin >> numero4;
    cout << "Introduce el quinto numero: ";
    cin >> numero5;

    cout << "Introduce el numero de referencia: ";
    cin >> referencia;


    (numero1 > referencia && numero2 > referencia && numero3 > referencia && numero4 > referencia && numero5 > referencia)
    ? cout << "Todos los numeros son mayores que el numero de referencia." << endl
    : cout << "No todos los numeros son mayores que el numero de referencia." << endl;

    return 0;
}

