#include <stdio.h>

int main(void)
{
	FILE *fp, *sp;
	int nregistros = 0, nchars = 0, i = 0;

	fp = fopen("banana.txt", "r");
	nregistros = fgetc(fp) - '0';
	printf("\nAtualmente ha %d registros.", nregistros);
		
	/*
	i = 0;
	do{
        nchars = fgetc(fp);
        if(nchars == '\n') {
            i++;
        }
    }while(nchars != EOF);
    */
    
    i = 0;
    while(nchars != EOF)
    {
    	nchars = fgetc(fp);
    	if(nchars == '\n')
    	{
    		i++;
		}
	}
    	
	printf("\n%d linhas", i);
}
