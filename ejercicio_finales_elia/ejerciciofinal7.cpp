//elias ruben
#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Introduce un n�mero: ";
    cin >> numero;

    if (numero > 0) {
        cout << "El n�mero es positivo." << endl;
    } else if (numero < 0) {
        cout << "El n�mero es negativo." << endl;
    } else {
        cout << "El n�mero es cero." << endl;
    }
    return 0;
}
