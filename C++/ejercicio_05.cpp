#include<iostream>
using namespace std;

int main() {
    // Código para el ejercicio 5
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
