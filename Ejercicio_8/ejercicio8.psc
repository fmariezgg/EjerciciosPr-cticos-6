Proceso ejercicio8
		Definir longi, i, producto_punto Como Entero;
		Definir arreglo1, arreglo2 Como Entero;
		
		Escribir "Ingrese la longitud de los vectores: ";
		Leer longi;
		Escribir "Ingrese los elementos del primer vector: ";
		Para i <- 1 Hasta longi Hacer
			Escribir "Elemento ", i, ":" ;
			Leer arreglo1;
		FinPara
		
		Escribir "Ingrese los elementos del segundo vector:" ;
		Para i <- 1 Hasta longi Hacer
			Escribir "Elemento ", i, ":" ;
			Leer arreglo2;
		FinPara
		
		producto_punto <- 0;
		Para i <- 1 Hasta longi Hacer
			producto_punto <- producto_punto + (arreglo1 * arreglo2);
		FinPara
		
		Escribir "El producto punto de los vectores es: ", producto_punto;

FinProceso
