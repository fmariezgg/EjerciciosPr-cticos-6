Proceso ejercicio7
		Definir longi, i Como Entero;
		Definir vector1, vector2, vector_suma Como Real;
		
		Escribir "Ingrese la longitud de los vectores: ";
		Leer longi;
		
		Escribir "Ingrese los elementos del primer vector:";
		Para i <- 1 Hasta longi Hacer
			Escribir "Elemento ", i, ": ";
			Leer vector1;
		FinPara
		
		Escribir "Ingrese los elementos del segundo vector:";
		Para i <- 1 Hasta longi Hacer
			Escribir "Elemento ", i, ": ";
			Leer vector2;
		FinPara
		
		Para i <- 1 Hasta longi Hacer
			vector_suma <- vector1 + vector2;
		FinPara
		
		Escribir "La suma de los dos vectores es:";
		Escribir vector_suma;

FinProceso
