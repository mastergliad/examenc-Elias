//elias ruben
#include <iostream>
using namespace std;

int main() {
    int dia;

    cout << "Introduce un n�mero del 1 al 7: ";
    cin >> dia;

    switch (dia) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Mi�rcoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "S�bado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
        default:
            cout << "N�mero inv�lido. Por favor, introduce un n�mero entre 1 y 7." << endl;
    }

    return 0;
}
