#include <stdio.h>
#include <conio.h>
#include <locale.h>

/*Fa�a um programa que leia o nome do usu�rio, a idade do
usu�rio, o nome da m�e do usu�rio e a idade da m�e do
usu�rio. O programa dever� imprimir na tela quantos anos a
m�e do usu�rio tinha quando ele nasceu. A resposta deve ter
o formato deste exemplo: �Carlos, quando voce nasceu, Dona
Cecilia tinha 27 anos�.*/

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
	
	printf("Digite o nome da sua m�e: ");
	fflush(stdin);
	gets(nome_mae);
	printf("Digite a sua idade: ");
	scanf("%i", &idade_mae);
	
	printf("\n");
	
	diferenca = idade_mae - idade;
	
	printf("%s, quando voc� nasceu, Dona %s tinha %i anos.", nome, nome_mae, diferenca);
	
	printf("\n");
	printf("\n");
	
	if(diferenca < 30)
	{
		printf("Nossa, era uma mocinha.");
	}else
	{
		printf("J� era uma respeitavel senhora.");
	};
	
	getche();
	return 0;
	
}
