#include <stdio.h>
#include <conio.h>
#include <locale.h>

/*Faça um programa que leia dois números reais A e B e os
imprima na tela. O valor da variável A deve ser apresentado
com duas casa decimais e o valor da variável B com três casas
decimais.*/

main(){
	
    setlocale (LC_ALL,"portuguese");
	
	float A, B;
	
	printf("Digite o valor A: ");
	scanf("%f", &A);
	
	printf("Digite o valor B: ");
	scanf("%f", &B);
	
	printf("\n");
	
	printf("O valor de A é: %.2f\n", A);
	printf("O valor de B é: %.3f", B);
	
	printf("\n");
	
	getche();
	return 0;
	
}
