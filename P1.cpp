#include <stdio.h>
#include <conio.h>
#include <locale.h>

/*Fa�a um programa que leia dois n�meros reais A e B e os
imprima na tela. O valor da vari�vel A deve ser apresentado
com duas casa decimais e o valor da vari�vel B com tr�s casas
decimais.*/

main(){
	
    setlocale (LC_ALL,"portuguese");
	
	float A, B;
	
	printf("Digite o valor A: ");
	scanf("%f", &A);
	
	printf("Digite o valor B: ");
	scanf("%f", &B);
	
	printf("\n");
	
	printf("O valor de A �: %.2f\n", A);
	printf("O valor de B �: %.3f", B);
	
	printf("\n");
	
	getche();
	return 0;
	
}
