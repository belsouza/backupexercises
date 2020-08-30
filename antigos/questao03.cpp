#include <stdio.h>
#include <string.h>

void exibevetor( char v[] )
{
	int i, tam;
	tam = strlen(v);
	for(i = 0; i < tam; i++ )
	{
		printf("%c", v[i]);
	}
	printf("\n");
}

void questao03(char str[], char cpf[], char nome[], char estado[], char uf[])
{
      int i, j, k; 	      
            
      for(i = 0; str[i] != ';'; i++)
      {
      	cpf[i] = str[i];      	
	  }
	  *(cpf+i) = '\0';
	  
	  
	  k = 0;
	  for(j = i+1; str[j] != ';'; j++)
      {
          nome[k] = str[j];
          k++;
          i++;
	  }
	  *(nome+j) = '\0';
	  
	  
	  k = 0;
	  for(j = i+1; str[j] != ';'; j++)
      {
          estado[k] = str[j];
          k++;
          i++;
	  }
	  *(estado+j) = '\0';
	 
	  k = 0;
	  for(j = i+1; str[j] != ';'; j++)
      {
          uf[k] = str[j];
          k++;
          i++;
	  }
	  *(uf+j) = '\0';
	
}

