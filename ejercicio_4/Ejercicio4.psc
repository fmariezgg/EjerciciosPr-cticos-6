Proceso ejercicio4
Definir nota, suma, contador Como Entero;
Definir promedio Como Real;
suma<-0;

	Para contador <- 1 hasta 10 Hacer
		Escribir "Ingrese la nota del estudiante ", contador, ": ";
		Leer nota;
		suma<-suma+nota;
	FinPara
	
	promedio<-suma/10;
	Escribir "El promedio general de la seccion es: ", promedio;
	
FinProceso
