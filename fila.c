#include <stdio.h>
#include <stdlib.h>



typedef struct Node{
	int id;
	struct Node *next;

}Node;

Node *front = NULL;
Node *rear = NULL;

void enqueue(int data){

Node *ptr;
ptr = malloc(sizeof(Node));

ptr->next = NULL;
ptr->id = data;

if(rear == NULL)
   {
   	front = ptr; //front e rear se tornam o primeiro nó
   	rear = ptr;


   }

   rear->next = ptr; // só rear é atualizado 
   rear = rear->next;
}

void dequeue(){
   
  if(front != NULL){
  	Node *remDisplay; //recebe ponteiro alocado dinamicamente e cria uma variavel pra receber valor front
  	remDisplay = front; //recebe valor front
  	front = front->next;
  	printf("Elemento %d removido da lista", remDisplay->id);
  	free(remDisplay);
  }
  else printf("fila vazia");

}

void showqueue(){
	Node *display;
	display = front;

	if(front == NULL){
		printf("fila vazia");
		return;
	}

    while(display != NULL){
    	printf("RG: %d\n", display->id);
    	display = display->next;
    	
    }
    return;
}



int main(int argc, char const *argv[])
{
	char choose;
	int data;

do{
	printf("aperte a para adicionar á fila, b para remover da fila, c para mostrar elementos na fila e ESC 2x para sair\n");
	scanf("%c", &choose);
	switch(choose){
		case 'a':
		printf("insira o rg da pessoa\n");
		scanf("%d", &data);
		enqueue(data);
		break;
	
		case 'b':
		dequeue();
		break;

		case 'c':
		showqueue();
		break;

		default:
		printf("valor errado, pressione outro botão\n");
	
}
}while(getchar() != 27);

	return 0;
}