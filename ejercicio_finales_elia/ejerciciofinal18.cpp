//elias ruben
#include <iostream>
using namespace std;

void calcularMayor(int a, int b, int c, int &mayor) {
    if (a >= b && a >= c) {
        mayor = a;
    } else if (b >= a && b >= c) {
        mayor = b;
    } else {
        mayor = c;
    }
}

int main() {
    int num1, num2, num3, mayor;

    cout << "Introduce el primer n�mero: ";
    cin >> num1;
    cout << "Introduce el segundo n�mero: ";
    cin >> num2;
    cout << "Introduce el tercer n�mero: ";
    cin >> num3;

    calcularMayor(num1, num2, num3, mayor);
    cout << "El mayor de los n�meros es: " << mayor << endl;


    return 0;
}
