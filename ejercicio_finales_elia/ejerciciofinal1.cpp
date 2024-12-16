// Elias Ruben
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int num1, num2;
    cout << "Introduce el primer numero entero: ";
    cin >> num1;
    cout << "Introduce el segundo numero entero: ";
    cin >> num2;

    cout << "Suma: " << num1 + num2 << endl;
    cout << "Resta: " << num1 - num2 << endl;
    cout << "Multiplicacion: " << num1 * num2 << endl;
    cout << "Division: " << (num2 != 0 ? num1 / static_cast<double>(num2) : NAN) << endl;
    return 0;
}

