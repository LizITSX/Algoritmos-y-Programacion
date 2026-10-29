/* Ejercicio 1.
 * Escribir un programa que muestre por pantalla el resultado de la siguiente operación aritmética 
 * (3+2/2∙5)~2 
 */
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << pow((3 + 2 / 2 * 5), 2) << endl;
    return 0;
}