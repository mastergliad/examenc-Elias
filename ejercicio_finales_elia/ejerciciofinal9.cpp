//elias ruben
#include <iostream>
using namespace std;

int main() {
    int opcion;
    float num1, num2;

    cout << "Menu de Operaciones Matematicas" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "Selecciona una operacion (1-4): ";
    cin >> opcion;

    cout << "Introduce el primer numero: ";
    cin >> num1;
    cout << "Introduce el segundo numero: ";
    cin >> num2;

    switch (opcion) {
        case 1:
            cout << "Resultado de la suma: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Resultado de la resta: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Resultado de la multiplicación: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0) {
                cout << "Resultado de la división: " << num1 / num2 << endl;
            } else {
                cout << "Error: No se puede dividir entre cero." << endl;
            }
            break;
        default:
            cout << "Opción inválida. Por favor selecciona un número entre 1 y 4." << endl;
    }

    return 0;
}
