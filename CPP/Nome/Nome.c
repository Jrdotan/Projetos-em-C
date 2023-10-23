#include <stdlib.h>
#include <stdio.h>

int main()
{
	char name[40];

	printf("diga seu nome: ");
	
	fgets(name, 40, stdin);

	printf("\n%sé um belo nome!!!\n", name);

	system("sleep 3s");

	return 0;
}
