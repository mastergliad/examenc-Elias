//elias ruben
#include <iostream>
using namespace std;

int sumar(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    cout << "Introduce el primer n�mero: ";
    cin >> num1;
    cout << "Introduce el segundo n�mero: ";
    cin >> num2;

    cout << "La suma de " << num1 << " y " << num2 << " es: " << sumar(num1, num2) << endl;

    return 0;
}
