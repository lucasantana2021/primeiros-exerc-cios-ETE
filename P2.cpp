#include <stdio.h>
#include <conio.h>
#include <locale.h>

/*Faça um programa que leia o nome do usuário e escreva uma
frase de saudação, desejando um bom dia de trabalho para
o mesmo. A resposta deve ter o formato deste exemplo: “Ola
Joao, tenha um otimo dia de trabalho!”. Faca o programa soar
um sinal sonoro(beep) ao escrever esta frase.*/

main(){
	
	setlocale (LC_ALL, "portuguese");
	
	char nome[15];
	
	printf("Digite seu nome: ");
	gets(nome);
	printf("\n");
	printf("Olá %s, nunca se esqueça que Deus te ama!!\a", nome);
	
	getche();
	return 0;	
	
	
}
