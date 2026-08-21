// Determinar el porcentaje de hombres y de mujeres presentes en el curso de Algoritmos, si se conoce el nu?mero de hombres y mujeres que tiene.
Algoritmo calcularporcentasalon
	// 9 Mujeres y 38 Hombres en total 47 compañeros en mi salon
	Definir Comp, H, M, PH, PM Como Real
	Escribir 'cuantos compañeros tienes en total?:'
	Leer Comp
	Escribir 'cuantos compañeros son hombres?:'
	Leer H
	M <- Comp-H
	PH <- (H*100)/Comp
	PM <- (M*100)/Comp
	Escribir ' el poprcentaje de hombres en tu salon ees de: ', PH, '%'
	Escribir ' el porcentaje de mujeres en tu salon es de: ', PM, '%'
FinAlgoritmo
