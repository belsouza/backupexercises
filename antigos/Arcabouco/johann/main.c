


typedef struct cpf
{
	int digitos[9];
	int verificador[2];
}CPF;

typedef struct nasc{
	int dia;
	int mes;
	int ano;
}Data;

typedef struct agenda{
	
	char nome[30];
	CPF numero;
	Data nasc;
	char email[30];
	int status;	
	
}Agenda;


int main(void)
{
	Agenda user[100];
	preencheAgenda(user);
	return 0;
}
