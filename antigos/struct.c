#include <stdio.h>

struct data_de_nascimento
{
	int dia;
	int mes;
	int ano;
};

struct ficha
{
	char nome[100];
	struct data_de_nascimento nascimento;
	int telefone;
	char email[100];
};

int main(void)
{
	struct ficha maloqueiro;
	printf("\nEntre com o nome do aluno: ");
	gets(maloqueiro.nome);
	
	fflush(stdin);
	printf("\nEntre com o dia do nascimento: ");
	scanf("%d", &maloqueiro.nascimento.dia);
	
	fflush(stdin);
	printf("\nEntre com o mes do nascimento: ");
	scanf("%d", &maloqueiro.nascimento.mes);
	
	fflush(stdin);
	printf("\nEntre com o ano do nascimento: ");
	scanf("%d", &maloqueiro.nascimento.ano);
	
	fflush(stdin);
	printf("\nEntre com o numero do telefone: ");
	scanf("%d", &maloqueiro.telefone);
	
	fflush(stdin);
	printf("\nEntre com o email: ");
	scanf("%s", &maloqueiro.email);
	
	fflush(stdin);
	printf("\nDados do usuario:");
	printf("\n\nNome: %s\nNascimento: %d/%d/%d\nTelefone: %d\nEmail: %s\n", maloqueiro.nome, maloqueiro.nascimento.dia, maloqueiro.nascimento.mes, maloqueiro.nascimento.ano, maloqueiro.telefone, maloqueiro.email);
}
