#include <stdio.h>
#include <string.h>
//*str == *(str + tam)

int isPalRec( char str[], int s, int e){
	if(s == e){
		return 1;
	}
	
	if(str[s] != str[e])
	{
		return 0;
	}
	
	if(s < e + 1){
		return (isPalRec(str, s + 1, e - 1));
	}
	
	return 1;	
}

int isPalindrome( char str[])
{
	int n = strlen(str);
	if(n == 0){
		return 1;
	}
	return isPalRec(str, 0, n-1);
}


int main(void)
{
	int tam;
	char str[20];
	gets(str);
	
	if(isPalindrome(str))
	{
		printf("Sim");
	}
	else
	{
		printf("Nao");
	}
	
	return 0;
}
