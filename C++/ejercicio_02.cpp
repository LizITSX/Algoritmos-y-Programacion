/* Ejercicio 2.
 * Escribir un programa que pida al usuario su peso (en kg) y 
 * estatura (en metros), calcule el índice de masa corporal y
 * lo almacene en una variable, y muestre por pantalla la frase 
 * “Tu índice de masa corporal es <imc>”. 
 * El IMC es el índice de masa corporal calculado redondeado 
 * con dos decimales.
 */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double peso, estatura, imc;
    cout << "Introduce tu peso en kg: ";
    cin >> peso;
    cout << "Introduce tu estatura en metros: ";
    cin >> estatura;
    imc = peso / (estatura * estatura);
    cout << fixed << setprecision(2) << "Tu índice de masa corporal es " << imc << endl;
    return 0;
}