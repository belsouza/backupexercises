// questao 6

#include <stdio.h>



int main(void) {

	int inteiro;
	int a, b, c;

	printf("Entre com o inteiro: \n1. para crescente;\n2. para decrescente;\n3. para meio.\n");
	scanf("%d", &inteiro);

	printf("\nEntre com o primeiro numero: ");
	scanf("%d", &a);

	printf("\nEntre com o segundo numero: ");
	scanf("%d", &b);

	printf("\nEntre com o terceiro numero: ");
	scanf("%d", &c);

	//i = 1: os três valores em ordem crescente;	

	//i = 2: os três valores em ordem decrescente;

	//i = 3: o maior valor deve ser apresentado no meio dos outros;

	if ((a == b) || (b == c) || (a == c)) {
		printf("Pelo menos dois numeros iguais. Operacao abortada.");
	}
	else {

		//comeca inteiro 2
		if (inteiro == 2) {

			if ((a > b) && (a > c)) {

				if (b > c) {
					printf("%d > %d > %d", a, b, c);
				}
				else {
					printf("%d > %d > %d", a, c, b);
				}

			}
			else {
				if ((b > a) && (b > c)) {

					if (a > c) {
						printf("%d > %d > %d", b, a, c);
					}
					else {
						printf("%d > %d > %d", b, c, a);
					}
				}
				else {

					if ((c > a) && (c > b)) {

						if (a > b) {
							printf("%d > %d > %d", c, a, b);
						}
						else {
							printf("%d > %d > %d", c, b, a);
						}
					}
					else {
						printf(" OPS! ");
					}
				}
			}
		}
		//else inteiro 2
		else {
			if (inteiro == 1) {

				if ((a < b) && (a < c)) {

					if (b < c) {
						printf("%d > %d > %d", a, b, c);
					}
					else {
						printf("%d > %d > %d", a, c, b);
					}

				}
				else {
					if ((b < a) && (b < c)) {

						if (a < c) {
							printf("%d > %d > %d", b, a, c);
						}
						else {
							printf("%d > %d > %d", b, c, a);
						}
					}
					else {

						if ((c < a) && (c < b)) {

							if (a < b) {
								printf("%d > %d > %d", c, a, b);
							}
							else {
								printf("%d > %d > %d", c, b, a);
							}
						}
						else {
							printf(" OPS! ");
						}
					}
				}
			}
			else {
				if (inteiro == 3) {

					if ((a > b) && (a > c)) {
						printf("%d > %d > %d", b, a, c);
					}
					else {

						if ((b > a) && (b > c)) {
							printf("%d > %d > %d", a, b, c);
						}
						else {
							if ((c > a) && (c > b)) {
								printf("%d > %d > %d", a, c, b);
							}
							else {
								printf("\nException");
							}
						}
					}

				}
				else {
					printf("Entre com uma numeracao valida. ");
				}
			}					//end if((a < b) && (a < c))					
		}				//end (inteiro = 1)
	}
	//fim else inteiro 2
	return 0;
}


