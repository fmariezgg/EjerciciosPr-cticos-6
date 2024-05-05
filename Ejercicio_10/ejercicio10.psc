Proceso ejercicio10
    Definir i, j Como Entero;
    Definir matrizA, matrizB, resultado Como Entero;
	
    // Declaramos matrices
    Dimension matrizA[3, 3];
    Dimension matrizB[3, 3];
    Dimension resultado[3, 3];
	
    // Datos matrizA
    Escribir "Matriz A: ";
    Para i<-0 Hasta 2 Con Paso 1 Hacer
        Para j<-0 Hasta 2 Con Paso 1 Hacer
            Escribir "Ingresa un numero, fila ", i+1, ", columna ", j+1, ":";
            Leer matrizA[i, j];
        FinPara
    FinPara
	
    // Salida matrizA
    Escribir "Matriz A";
    Para i<-0 Hasta 2 Con Paso 1 Hacer
        Para j<-0 Hasta 2 Con Paso 1 Hacer
            Escribir matrizA[i, j], " ", Sin Saltar;
        FinPara
        Escribir "";
    FinPara
	
    // Salida matriz transpuesta
    Escribir "Matriz transpuesta ";
    Para i<-0 Hasta 2 Con Paso 1 Hacer
        Para j<-0 Hasta 2 Con Paso 1 Hacer
            Escribir matrizA[j, i], " ", Sin Saltar;
        FinPara
        Escribir "";
    FinPara
			
FinProceso
