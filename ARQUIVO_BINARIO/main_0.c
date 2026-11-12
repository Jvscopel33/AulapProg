#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[21];
    char cpf[18];
    int idade;
} Pessoa;

int main()
{
    FILE *f = fopen("pessoas.bin", "wb");

    Pessoa *listaDePessoas;
    int qtd;
    scanf("%d\n", &qtd);
    listaDePessoas = (Pessoa *)calloc(qtd, sizeof(Pessoa));
    for (int i = 0; i < qtd; i++)
    {
        scanf("%[^\n]\n", listaDePessoas[i].nome);
        scanf(" %[^\n]\n", listaDePessoas[i].cpf);
        scanf(" %d\n", listaDePessoas[i].idade);
    }

    //ESCREVENDO AS PESSOAS NO ARQUIVO BINARIO
    

    free(listaDePessoas);
    fclose(f);
    return 0;
}
