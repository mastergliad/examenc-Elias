//elias ruben
#include <iostream>
using namespace std;

void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;

    cout << "Introduce el primer n�mero: ";
    cin >> num1;
    cout << "Introduce el segundo n�mero: ";
    cin >> num2;

    cout << "Antes del intercambio: num1 = " << num1 << ", num2 = " << num2 << endl;
    intercambiar(num1, num2);
    cout << "Despu�s del intercambio: num1 = " << num1 << ", num2 = " << num2 << endl;
    return 0;
}
