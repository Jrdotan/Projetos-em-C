#include<stdlib.h>
#include<stdio.h>

int main ()
{
	float anos,dias;
	printf("digite a sua idade em anos: ");
	scanf("%f", &anos);
	dias = anos*365;
	printf("a sua idade em dias é %.f\n", dias);
	system("sleep 3s");

	return 0;
}
