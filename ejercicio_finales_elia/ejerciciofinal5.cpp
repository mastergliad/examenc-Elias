//elias ruben
#include <iostream>
using namespace std;

int main() {

    float numero1, numero2, numero3;
    cout << "Introduce el primer numero: ";
    cin >> numero1;
    cout << "Introduce el segundo numero: ";
    cin >> numero2;
    cout << "Introduce el tercer numero: ";
    cin >> numero3;


    (numero1 < numero2 && numero2 < numero3) ? cout << "Los numeros están en orden ascendente." << endl :
    (numero1 > numero2 && numero2 > numero3) ? cout << "Los numeros están en orden descendente." << endl :
    cout << "Los numeros estan desordenados." << endl;

    return 0;
}
