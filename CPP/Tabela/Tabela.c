#include <stdlib.h>
#include <stdio.h>

int main()
{
 	float Potes=50, Condimentos=25, Taboa=60, Tapetes=20; 

	printf("\nPotes %10.1f%s", Potes, "R$");
	printf("\nCondimentos %4.1f%s", Condimentos, "R$");
	printf("\nTaboa %10.5f%s",Taboa, "R$");
	printf("\nTapetes %8.1f%s%c", Tapetes, "R$", '\n');
	printf("\n compre tudo isso \n");		

	return 0;
}
