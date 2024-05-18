#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct participante{
    int id;
    char nome[120];
    char curso[120];
    int ano;
    struct participante *next;
}Participante;

Participante *front = NULL;
Participante *rear = NULL;

void inserir_participante();
void modificar_participante(int);
void ler_participantes();

int main(int argc, char const *argv[])
{
  char escolha;

    printf("pressione a para inserir novos participantes ou b para ler todos os cadastrados\n");
    scanf("%c", escolha);

    switch(escolha){
      case 'a':
      break;

      case 'b':
      ler_participantes();
      break;
    }
    

    return 0;
}

void inserir_participante(){
char nome[120];
char curso[120];
int ano;

Participante *this;
this = malloc(sizeof(Participante));

this->next = NULL;


if(rear == NULL)
   {
   	front = this; //front e rear se tornam o primeiro nó
   	rear = this;


   }

this->id = rear->id + 1; 

printf("digite o primeiro nome do participante\n");
scanf("%s", nome);

strncat(this->nome, nome, 120 - 1);

char escolha;

printf("escolha seu curso, digite a para DSM, b para SI ou c para GE\n");
scanf("%c", &escolha);

switch(escolha){
    
    case 'a': 
    strncat("DSM", curso, 120 - 1);
    strncat(this->nome, curso, 120 - 1);
    break;

    case 'b': 
    strncat("SI", curso, 120 + 1);
     strncat(this->nome, curso, 120 - 1);
    break;

    case 'c': 
    strncat("GE", curso, 120 + 1);
    strncat(this->nome, curso, 120 - 1);
    break;

}

printf("qual o ano em que foi cursado?: \n");
scanf("%d", &ano);

this->ano = ano;



   rear->next = this; // só rear é atualizado 
   rear = rear->next;
}



void modificar_participante(int id){
  Participante *curr;
  char nome[120];
  char curso[120];
  int ano;
  
  curr = front;

  if(curr == NULL){
    printf("lista vazia, não existem participantes\n");
    return;

  }

  while(curr->id != id){
      curr = curr->next;
    if(curr == NULL){
      return;
    }
  }

  if(curr->id != id){
    return;
  }

  else{

printf("digite o primeiro nome do participante\n");
scanf("%s", nome);

strncat(curr->nome, nome, 120 - 1);

char escolha;

printf("escolha seu curso, digite a para DSM, b para SI ou c para GE\n");
scanf("%c", &escolha);

switch(escolha){
    
    case 'a': 
    strncat("DSM", curso, 120 - 1);
    strncat(curr->nome, curso, 120 - 1);
    break;

    case 'b': 
    strncat("SI", curso, 120 + 1);
     strncat(curr->nome, curso, 120 - 1);
    break;

    case 'c': 
    strncat("GE", curso, 120 + 1);
    strncat(curr->nome, curso, 120 - 1);
    break;
  }
}

}

void ler_participantes()
{
  FILE *handler;
  int id, ano;
  char nome[200];
  char curso[200];

  handler = fopen("/Downloads/ola.txt", "rt");
  int c;
  while(c = fgetc(handler)!= EOF){
    printf("%c", c);
  }  
  fclose(handler);
}



