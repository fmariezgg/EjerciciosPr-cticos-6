Proceso ejercicio5
	Definir aprobados, reprobados, calificacion, suma, promedio Como Entero;
	Definir contador Como Entero;
	aprobados <- 0;
	reprobados <- 0;
	suma <- 0;
		
	Para contador <- 1 Hasta 8 Con Paso 1 Hacer
			Escribir "*** Rango 0-100 ***";
			Escribir "Ingrese la calificación del estudiante ", contador, ":";
			Leer calificacion;
			
			Si calificacion >= 70 Y calificacion <= 100 Entonces
				aprobados <- aprobados + 1;
			Sino
				reprobados <- reprobados + 1;
			FinSi
			
			suma <- suma + calificacion;
		FinPara
		
		promedio <- suma / 8;
		
		Escribir "Cantidad de alumnos aprobados:", aprobados, " :)" ;
		Escribir "Cantidad de alumnos reprobados:", reprobados, " :(";
		Escribir "Promedio general del grupo:", promedio;
		
FinProceso
