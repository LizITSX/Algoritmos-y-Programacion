/* Ejercicio 4.
 * Cuando se renta un inmueble se establecen impuestos de acuerdo al costo mensual. 
 * Escribir un programa que pregunte al usuario su renta anual y muestre por pantalla el monto de impuesto que le corresponde.
 * Renta anual                          Porcentaje de impuesto
 * Menor a $10,000                          5%
 * Entre $10,000 y menor a $20,000          15%
 * Entre $20,000 y menor a $35,000          20%
 * Entre $35,000 y $60,000                  30%
 * Mayor a $60,000                          45%
 */
 #include <iostream>
 using namespace std;
 int main() {
     double rentaAnual, impuesto;
     cout << "Ingrese su renta anual: ";
     cin >> rentaAnual;

     if (rentaAnual < 10000) {
         impuesto = rentaAnual * 0.05;
     } else if (rentaAnual < 20000) {
         impuesto = rentaAnual * 0.15;
     } else if (rentaAnual < 35000) {
         impuesto = rentaAnual * 0.20;
     } else if (rentaAnual <= 60000) {
         impuesto = rentaAnual * 0.30;
     } else {
         impuesto = rentaAnual * 0.45;
     }

     cout << "El monto de impuesto que le corresponde es: $" << impuesto << endl;

     return 0;
 }