#include <stdio.h>
#include <conio.h>
#include <locale.h>

/*Faça um programa que leia dois números inteiros A e B e
imprima o resultado da subtração de A por B. A resposta deve
ter o seguinte formato: “6 – 2 = 4”.*/

main(){
	
	int A, B, sub;
	
	printf("Digite o valor A: ");
	scanf("%i", &A);
	
	printf("Digite o valor B: ");
	scanf("%i", &B);
	
	printf("\n");
	
	sub = A - B;
	
	printf("\t\"%i - %i = %i\"", A, B, sub);
	
	getche();
	return 0;
	
}

