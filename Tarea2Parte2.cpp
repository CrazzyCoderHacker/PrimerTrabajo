#include <iostream>
#include <conio.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{   
   system("color f9");

 int opcion;
 float temperatura, resultado;
 
 
 printf("Selecionar Conversion\n");
 printf("1.Celsius a Fahrenheit\n");
 printf("2.Fahrenheit a Celsius\n");
 printf("Ingrese numero de opcion: ");
 scanf("%d", &opcion);
 
 if(opcion==1){
 	printf("Ingresar cantidad en celsius: ");
 	scanf("%f", &temperatura);
 	resultado = (9.0 / 5.0) * temperatura + 32;
 	printf("Equivalente en fahrenheit: %.2f\n", resultado);
 }  
 else if(opcion==2){
 	printf("Ingresar cantidad en fahrenheit: ");
 	scanf("%f", &temperatura);
 	resultado = (temperatura - 32)* (5.0 / 9.0);
 	printf("Equivalente en Celsius: %.2f\n", resultado);
	  }
 
 
 

 
    
 
 
	getch();
	
	return 0;
}
