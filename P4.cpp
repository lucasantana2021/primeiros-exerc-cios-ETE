#include <stdio.h>
#include <conio.h>
#include <locale.h>

/*Faca um programa que leia o nome do usuário e a sua idade e
imprima quantos anos ele terá em 2020. A resposta deve ter o
formato deste exemplo: “Carlos, em 2020 voce estara com 45
anos”.*/

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	char nome[15];
	int idade, idade2;
	
	printf("Digite seu nome: ");
	gets(nome);
	printf("Digite a sua idade: ");
	scanf("%i", &idade);
	printf("\n");
	
	idade2 = idade - 1;
	
	printf("%s, em 2020 você tinha %i anos.", nome, idade2);
	
	getche();
	return 0;
	
}
