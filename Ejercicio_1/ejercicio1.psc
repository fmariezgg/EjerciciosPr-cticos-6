Proceso ejercicio1
	Definir total_suma, cantidad, i, n Como Entero;
	Escribir "Cuantos numeros quiere sumar?";
	Leer cantidad;
	i<-1; //variable de control para el ciclo Mientras
	total_suma<-0;
	Mientras i<=cantidad Hacer
		Escribir "Ingrese el numero: ", i;
		leer n;
		total_suma<-total_suma+n;
		i<-i+1;//incrementamos 
	FinMientras
	Escribir "La suma de los numeros es: ", total_suma;
	
FinProceso
