//elias ruben
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2, num3;

    cout << "Introduce el primer n�mero: ";
    cin >> num1;
    cout << "Introduce el segundo n�mero: ";
    cin >> num2;
    cout << "Introduce el tercer n�mero: ";
    cin >> num3;

    double promedio = (num1 + num2 + num3) / 3;
    double mayor = fmax(num1, fmax(num2, num3));
    double menor = fmin(num1, fmin(num2, num3));
    double diferencia = mayor - menor;

    cout << "Promedio: " << promedio << endl;
    cout << "Diferencia entre mayor y menor: " << diferencia << endl;

    return 0;
}
