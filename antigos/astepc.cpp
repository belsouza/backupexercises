#include <stdio.h>
#include <stdlib.h>
#include "chead.h"

int omaior( int v[] )
{
	int i, maior = 0;
	
	for(i = 0; i < 4; i++)
	{
		if(v[i] > maior )
		{
			maior = v[i];					
		}
	}
	return maior;
}

//Mostra o segundo 
int segundomaior( int v[], int maiorum )
{
	int i, smaior = 0;
	
	for(i = 0; i < 4; i++)
	{
		if( (v[i] > smaior) && (v[i] != maiorum) )
		{
			smaior = v[i];					
		}
	}
	return smaior;
}


//Mostra o maior dentre um vetor e conta as repeticoes do mesmo dentro do vetor
int resultado( int v[] )
{
	int i, maior, cont = 0, res = 0, index;
	maior = omaior( v );
	
	for(i = 0; i < 4; i++)
	{
		if(maior == v[i])
		{
			index = i;
			cont++;
		}
	}	
			
	if(cont == 1)
	{
		return index;
	}
	else
	{
		return 0;
	}	
}

//Pequena modificacao para assegurar os valores
int resultadosegundolugar( int v[] )
{
	int i, maior, segundo, cont = 0, res = 0, index;
	maior = omaior( v );
	segundo = segundomaior( v, maior );
	
	for(i = 0; i < 4; i++)
	{
		if(segundo == v[i])
		{
			index = i;
			cont++;
		}
	}	
			
	if(cont == 1)
	{
		return index;
	}
	else
	{
		return 0;
	}	
}

int comparasegundolugar(int p[], int q[])
{
	int i, pmaior, qmaior, indicemaior, cont = 0, maior1, maior2;
	
	maior1 = omaior( p );
	pmaior = segundomaior( p, maior1 );
	
	maior2 = omaior( q );
	qmaior = segundomaior( q, maior2 );
	
	
	
	for(i = 0; i < 4; i++)
	{
		if( (p[i] == pmaior) && (q[i] == qmaior) )
		{
			indicemaior = i;
			cont++;
		}
	}
		
	if(cont == 1)
	{
		return indicemaior;
	}
	else
	{
		return 0;
	}
}





//Compara dois vetores, alinhando seus indices
int compara(int p[], int q[])
{
	int i, pmaior, qmaior, indicemaior, cont = 0;
	pmaior = omaior(p);
	qmaior = omaior(q);
	
	for(i = 0; i < 4; i++)
	{
		if( (p[i] == pmaior) && (q[i] == qmaior) )
		{
			indicemaior = i;
			cont++;
		}
	}
		
	if(cont == 1)
	{
		return indicemaior;
	}
	else
	{
		return 0;
	}
}


//Função para determinar somente o primeiro lugar...

int primeirolugar( int p[], int q[], int r[], int s[] )
{
	int mpts;
	mpts = resultado(p);
    if(mpts != 0)
    {
    	return mpts;
    }
    else
    {
    	mpts = compara( p, q );
    	
    	if(mpts != 0)
    	{
    		return mpts;
		}
		else
		{
			mpts = compara( p, r );	
					
			if(mpts != 0)
			{
				return mpts;				
			}
		    
		    else
		    {
		    	mpts = compara( p, s );
		    	return mpts;
			}
		}
    	
	}    
}

//Função para determinar somente o segundo lugar...

int segundolugar( int p[], int q[], int r[], int s[] )
{
	int mpts;
	mpts = resultadosegundolugar(p);
    if(mpts != 0)
    {
    	return mpts;
    }
    else
    {
    	mpts = comparasegundolugar( p, q );
    	
    	if(mpts != 0)
    	{
    		return mpts;
		}
		else
		{
			mpts = comparasegundolugar( p, r );	
					
			if(mpts != 0)
			{
				return mpts;				
			}
		    
		    else
		    {
		    	mpts = comparasegundolugar( p, s );
		    	return mpts;
			}
		}
    	
	}    
}


int main(void)
{
	int i, imaior = 0, mpts = 0, spts = 0, empates = 0;
	int ipl = 0, isl = 0;
	
	
	int pontos[4] = {10, 10, 10, 10};
	int salgols[4] = { 5, -3, -3, 5};
	int golsfeitos[4] = {9, 3, 5, 10};
	int golsconv[4] = {4, 6, 8, 5};
	
	//vetor com os pontos, o numeromaior e quantasvezesaparece. Nao posso pegar o indice porque pode haver repeticao e nao posso classificar
    
	mpts = 	primeirolugar( pontos, salgols, golsfeitos, golsconv );
	spts = segundolugar(  pontos, salgols, golsfeitos, golsconv );	
		
	printf("Primeiro lugar Indice: %d,  Segundo lugar Indice: %d,", mpts, spts);
}
