//elias ruben
#include <iostream>
using namespace std;

int main() {

    float numero1, numero2;
    cout << "Introduce el primer numero: ";
    cin >> numero1;
    cout << "Introduce el segundo numero: ";
    cin >> numero2;


    (numero1 > numero2) ? cout << "El primer numero es mayor." << endl :
    (numero1 < numero2) ? cout << "El segundo numero es mayor." << endl :
    cout << "Los dos números son iguales." << endl;

    return 0;
}

