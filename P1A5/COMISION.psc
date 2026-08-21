// Un vendedor recibe un sueldo base ma?s un 10  MOD  extra por comisio?n de sus ventas. E?l desea saber cua?nto dinero obtendra? por concepto de comisiones por las tres ventas que hizo en el mes y el total que recibira? en dicho periodo
Algoritmo COMISIONES
	Definir num1, num2, num3, venta1, venta2, venta3 Como Entero
	Definir comision, sueldo, total Como Real
	Escribir 'Ingresa el total de la primera venta:'
	Leer num1
	Escribir 'Ingresa el total de la segunda venta:'
	Leer num2
	Escribir 'Ingresa el total de la tercera venta:'
	Leer num3
	venta1 <- num1*.10
	venta2 <- num2*.10
	venta3 <- num3*.10
	comision <- venta1+venat2+venta3
	Escribir 'Tu comisiopn por las 3 ventas es:', comision
	Escribir 'Escribe tu sueldo base para dar el total de dinero:'
	Leer sueldo
	total <- sueldo+comision
	Escribir 'total:', total
FinAlgoritmo
