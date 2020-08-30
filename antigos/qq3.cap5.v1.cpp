#include <stdio.h>
/*
Leia do teclado um valor n que represente a quantidade de alunos de uma turma.
Caso o valor lido seja menor do que 1 encerre o programa imediatamente. Caso
contrário leia as notas da p1 e da p2 desses n alunos e exiba no monitor o
número de alunos aprovados. Para que um aluno seja aprovado a média
aritmética das notas das suas duas provas tem que ser maior do que 5,0. 
*/

int main(void)
{
	int n, ap = 0; 
	float p1, p2, media;
	
	printf("Entre com o no de alunos:");
	scanf("%d", &n);
	if(n > 1)
	{
		while(n>=1)	
		{
			printf("Notas P1 e P2: ");
			scanf("%f  %f", &p1, &p2);
			media = (p1 + p2)/2;			
			printf("\nMedia: %.2f\n", media);
			if(media > 5.0)
			{
				ap++;	
			}					
			n--;	
		}
		printf("\n%d alunos aprovados.", ap);	
	}	
	return 0;
}
