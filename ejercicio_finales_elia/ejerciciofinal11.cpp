//elias ruben
#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0;

    cout << "Introduce numeros (ingresa un n�mero negativo para terminar):" << endl;
    do {
        cin >> numero;
        if (numero >= 0) {
            suma += numero;
        }
    } while (numero >= 0);

    cout << "La suma de todos los n�meros ingresados es: " << suma << endl;

    return 0;
}
