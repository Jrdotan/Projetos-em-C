#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* recebe_nome_dono();
char* recebe_modelo();
int recebe_num_chassi();
int recebe_dat_origem();

int main(int argc, char const *argv[])
{
    struct carro
    {
        char nome_dono[40];
        char modelo[40];
        int num_chassi;
        int dat_origem;
    };

    int TOT = 3;
    int i;
    struct carro vetor_cadastro[TOT];

    for (i = 0; i < TOT; i++)
    {
        strcpy(vetor_cadastro[i].nome_dono, recebe_nome_dono());
        strcpy(vetor_cadastro[i].modelo, recebe_modelo());
        vetor_cadastro[i].num_chassi = recebe_num_chassi();
        vetor_cadastro[i].dat_origem = recebe_dat_origem();
    }

    for (i = 0; i < TOT; ++i)
    {
        printf("Dono do veículo: %s\n", vetor_cadastro[i].nome_dono);
        printf("Modelo do veículo: %s\n", vetor_cadastro[i].modelo);
        printf("Número do Chassi: %d\n", vetor_cadastro[i].num_chassi);
        printf("Ano de fabricação: %d\n", vetor_cadastro[i].dat_origem);

        printf("\n\n");
    }

    return 0;
}

char* recebe_nome_dono()
{
    static char nome_dono[40];
    printf("Insira o nome do Dono do veículo: \n");
    scanf("%s", nome_dono); 
    return nome_dono;
}

char* recebe_modelo()
{
    static char modelo[40];
    printf("Insira o nome do Modelo: \n");
    scanf("%s", modelo); 
    return modelo;
}

int recebe_num_chassi()
{
    int num_chassi;
    printf("Insira o número do Chassi: \n");
    scanf("%d", &num_chassi);
    return num_chassi;
}

int recebe_dat_origem()
{
    int dat_origem;
    printf("Insira o Ano de fabricação: \n");
    scanf("%d", &dat_origem);
    return dat_origem;
}