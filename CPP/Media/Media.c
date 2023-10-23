#include <stdlib.h>
#include <stdio.h>

int main()
{
	float n1=0, n2=0, n3=0, media=0;

	printf("digite sua primeira nota: ");
	scanf("%f", &n1);

	printf("digite sua secunda nota: ");
	scanf("%f",&n2);

	printf("digite sua terceira nota: ");
	scanf("%f",&n3);

	media= (n1 + n2 + n3) / 3;

	if(media>=7)
{
	printf("você passou de ano\n");
}
	else if(media>=3)
{
	printf("Faça a recuperação\n");
}

	else
{
	printf("você é um merda meu amigo\n");
}
	return 0;
}
