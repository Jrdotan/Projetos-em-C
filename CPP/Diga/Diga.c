#include <stdlib.h>
#include <stdio.h>
#include <ncurses.h>

int main()
{
	char name[120];	
	int idade;


	printf("diga seu nome: ");
	fgets(name, 120, stdin);

	printf("\n%squantos anos você tem?: ", name);
	scanf("%d", &idade);
	
	printf("\n%svocê tem %d anos\n", name, idade);
	getchar();
	system("sleep 3s");
	return 0;
}
