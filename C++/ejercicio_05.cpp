/* Ejercicio 05: Comparador de años
 * Este programa compara un año ingresado por el usuario con el año actual y 
 * calcula la diferencia en años.
 * 
 * COMPARADOR DE AÑOS
 * ¿En qué año estamos?: 2019
 * Escriba un año cualquiera: 2024
 * Para llegar al año 2020 faltan 5 años.
 * 
 * COMPARADOR DE AÑOS
 * ¿En qué año estamos?: 2019
 * Escriba un año cualquiera: 1997
 * Desde el año 1997 han pasado 22 años.
 * 
 * COMPARADOR DE AÑOS
 * ¿En qué año estamos?: 2019
 * Escriba un año cualquiera: 2019
 * ¡Son el mismo año!
 */

#include<iostream>
using namespace std;

int main() {
    cout << "COMPARADOR DE AÑOS" << endl;
    int anioActual, anio;
    cout << "¿En qué año estamos? ";
    cin >> anioActual;
    cout << "Escriba un año cualquiera: ";
    cin >> anio;
    if (anio < anioActual) {
        cout << "Desde el año " << anio << " hasta el año " << anioActual << " han pasado " << anioActual - anio << " años." << endl;
    } else if (anio > anioActual) {
        cout << "Desde el año " << anioActual << " hasta el año " << anio << " faltan " << anio - anioActual << " años." << endl;
    } else {
        cout << "El año ingresado es igual al año actual." << endl;
    }
    return 0;
}
