//elias ruben
#include <iostream>
using namespace std;

int main() {
    int opcion;
    double numero;

    do {
        cout << "\nMenu de opciones:" << endl;
        cout << "1. Calcular el cuadrado de un numero" << endl;
        cout << "2. Calcular el cubo de un n�mero" << endl;
        cout << "3. Salir" << endl;
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Introduce un n�mero: ";
                cin >> numero;
                cout << "El cuadrado de " << numero << " es " << numero * numero << endl;
                break;
            case 2:
                cout << "Introduce un n�mero: ";
                cin >> numero;
                cout << "El cubo de " << numero << " es " << numero * numero * numero << endl;
                break;
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opci�n inv�lida. Por favor, selecciona una opci�n v�lida." << endl;

        }
    } while (opcion != 3);

    return 0;
}
