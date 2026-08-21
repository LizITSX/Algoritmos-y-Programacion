// Un estudiante desea saber cua?l sera? su calificacio?n final en el curso de Algoritmos, con los siguientes ??tems de calificaciones: Primer parcial: 20  MOD  Segundo parcial: 20  MOD  Pra?ctica: 35  MOD  Parcial final: 25  MOD .
Algoritmo calificacion
	Definir PP, SP, PR, PF, num1, num2, num3, num4, total Como Real
	Escribir 'entre el 1 al 10 cuanto sacaste en el primer parcial'
	Leer num1
	PP <- (num1*20)/10
	Escribir 'primer parcial calificacion:', PP
	Escribir 'entre el 1 al 10 cuanto sacaste en el segundo parcial'
	Leer num2
	SP <- (num2*20)/10
	Escribir 'segundo parcial calificacion:', SP
	Escribir 'del 1 al 10 cuanto sacaste en la practica'
	Leer num3
	PR <- (num3*35)/10
	Escribir 'practica:', PR
	Escribir 'del 1 al 10 cuanto sacaste en el parcial final'
	Leer num4
	PF <- (num4*25)/10
	Escribir 'parcial final:', PF
	total <- (PP+SP+PR+PF)/10
	Escribir 'Tu promedio final (en escala del 1 al 10) es:', total
FinAlgoritmo
