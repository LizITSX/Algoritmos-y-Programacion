/* Ejercicio 3: 
 * Una juguetería tiene mucho éxito en dos de sus productos: 
 * payasos y muñecas. Suele hacer venta por correo y la empresa 
 * de logística les cobra por peso de cada paquete así que deben 
 * calcular el peso de los payasos y muñecas que saldrán en cada 
 * paquete a demanda. Cada payaso pesa 112 g y cada muñeca 75 g. 
 * Escribir un programa que lea el número de payasos y muñecas 
 * vendidos en el último pedido y calcule el peso total del paquete 
 * que será enviado.
 */

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    
    int payasos, munecas;
    double pesoTotal;

    cout << "Ingrese el número de payasos vendidos: ";
    cin >> payasos;
    cout << "Ingrese el número de muñecas vendidas: ";
    cin >> munecas;

    pesoTotal = (payasos * 112) + (munecas * 75);

    cout << fixed << setprecision(2);
    cout << "El peso total del paquete es: " << pesoTotal << " g" << endl;

    return 0;
}
