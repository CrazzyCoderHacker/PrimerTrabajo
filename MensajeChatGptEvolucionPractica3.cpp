
//************************************************
//Elaboro: Victor Hugo de la Calleja Mojica
//Fecha: 14/08/2023
//Programa: Programa que realiza la muestra de mensajes en pantalla
/* Primero Programa*/
//*************************************************
#include <iostream>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	system("color f3");
	
	int i;
	for(i=1; i<=150;i++)
	{
	    printf("*");
	    if (i==71) 	
	       printf("EVOLUCION");
	}
	   for(i=1; i<=20;i++)
	   {
	     printf("* \n"); 
	     if(i==5)
	     printf("1. Primera Generacion: 1940s-1950s Valvulas de vacio: Utilizaban tubos de vac�o para el procesamiento. Tama�o grande: Eran enormes y requerian salas completas. Programacion en lenguaje de maquina: La programacion se hac�a directamente en codigo de maquina, lo que resultaba tedioso");
		 
	      if(i==10)
	     printf("2. Segunda Generacion: 1950s-1960s Transistores: Reemplazaron las v�lvulas de vac�o, reduciendo el tama�o y el calor generado. Lenguajes de programacion: Surgieron los primeros lenguajes de programaci�n de alto nivel, como COBOL y FORTRAN. Memoria m�s r�pida: Se introdujeron las memorias de n�cleos magn�ticos, m�s r�pidas y fiables.");
	     
	      if(i==15)
	     printf("3. Tercera Generacion: 1960s-1970s  Tercera GeneraciOn 1960s-1970s  Circuitos integrados: Los transistores se integraron en chips de silicio, aumentando la velocidad y la eficiencia. Multiprogramaci�n: Se permit�a ejecutar varios programas a la vez, mejorando la eficiencia del sistema. Sistemas operativos m�s avanzados: Surgieron sistemas operativos como UNIX.");
	     
	   }
	for(i=1; i<=150;i++)
	{
	    printf("*");
	    if (i==75) 
	       printf("FIN");
	}
	
	
	
	
	   	

   /* printf("***********************MENU PRINCIPAL***********************");
    for(i=1; i<=20;i++)
    printf("*  \n");
    for(i=1; i<=80;i++)
     printf("*");*/
	return 0;
}









  
