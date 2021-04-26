#include <stdio.h>
#include <conio.h>
#include <locale.h>

/*Faça um programa que leia o nome do usuário, a idade do
usuário, o nome da mãe do usuário e a idade da mãe do
usuário. O programa deverá imprimir na tela quantos anos a
mãe do usuário tinha quando ele nasceu. A resposta deve ter
o formato deste exemplo: “Carlos, quando voce nasceu, Dona
Cecilia tinha 27 anos”.*/

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	char nome[15], nome_mae[15];
	int idade, idade_mae, diferenca;
	
	printf("Digite o seu nome: ");
	//fflush(stdin);
	gets(nome);
	
	printf("Digite a sua idade: ");
	scanf("%i", &idade);
	printf("\n");
	
	printf("Digite o nome da sua mãe: ");
	fflush(stdin);
	gets(nome_mae);
	printf("Digite a sua idade: ");
	scanf("%i", &idade_mae);
	
	printf("\n");
	
	diferenca = idade_mae - idade;
	
	printf("%s, quando você nasceu, Dona %s tinha %i anos.", nome, nome_mae, diferenca);
	
	printf("\n");
	printf("\n");
	
	if(diferenca < 30)
	{
		printf("Nossa, era uma mocinha.");
	}else
	{
		printf("Já era uma respeitavel senhora.");
	};
	
	getche();
	return 0;
	
}
