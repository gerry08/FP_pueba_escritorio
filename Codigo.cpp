#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 
//gerardo Carbajal Alvarez
// Este programa asigna de manera aleatoria el descuento 
int main() 
{ 
	float importeCompra,descuento; 
	int num, pctDescuento; 
	srand(time(NULL)); //Libreria time.h y stdlib.h
	num=rand() % 8; // rango de valores // realiza la asignacion de la variable numero a una variable aleatoria
	printf ("\n----------------------------------------------------"); 
	switch(num)  //menu de seleccion
	{
		
		// me entrega el Descuento de manera aleaotria al azar 
		// es deir me indica si obtuve bola negra roja, verde, o azul de manera aleatoria, al azar como si fueran dados
		case 0: 
			printf ("\nBolita de color negro"); 
			descuento=10; 
		break; 
		case 1: printf ("\nBolita de color verde"); descuento=25; 
		break; 
		case 2: printf ("\nBolita de color amarillo"); descuento=50; 
		break; 
		case 3: printf ("\nBolita de color azul"); descuento=75; 
		break; 
		case 4: printf ("\nBolita de color rojo"); descuento=100; 
		break; 
		default: 
			descuento=0; 
			printf ("\n Sin descuento"); 
	} 
	printf ("\n\nSu descuento es de %3.2f porciento", descuento); 
	printf ("\n----------------------------------------------------"); 
	printf ("\nImporte total de la compra (sin descuento): $ "); 
	scanf ("%f", &importeCompra); 	
	printf ("\nSu importe total de compra fue: %.2f", importeCompra); 
	descuento = (importeCompra - ( importeCompra* descuento / 100)); 
	printf ("\nEl importe total con el descuento será¡ de: $ %.2f \n\n", descuento); 
	getchar();
	getchar();
return 1; 
} 
