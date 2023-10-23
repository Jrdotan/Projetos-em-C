#include <stdlib.h>
#include <stdio.h>

int main ()
{
	int idade;

	printf("quantos anos você tem?: ");
	
	scanf("%d", &idade);

	if(idade<=10)
{
		printf("você é muito novo\n");
		system("sleep 3s");
}

	else if(idade<=18)
{
		printf("você é um adolescente\n");
		system("sleep 3s");
}
	else if(idade<=30)
{
		printf("você é um jovem adulto\n");
		system("sleep 3s");
}
	else if(idade<=59)
{
		printf("você é um adulto\n");
		system("sleep 3s");
}
	else if(idade>=60)
{
		printf("você é um idoso\n");
		system("sleep 3s");
}


	

	return 0;
}
