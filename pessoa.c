#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "pessoa.h"

Pessoa *criaPessoa(char *nome, char *cpf)
{
    Pessoa *p = (Pessoa *)calloc(1, sizeof(Pessoa));
    strcpy(p->cpf, cpf);
    strcpy(p->nome, nome);
    return p;
}
Pessoa *lePessoa()
{
    char nome[MAX_TAM_NOME];
    char cpf[MAX_TAM_CPF];
    scanf(" %[^\n]\n", nome);
    scanf(" %[^\n]\n", cpf);
    Pessoa *p = criaPessoa(nome, cpf);
    return p;
}
void imprimePessoa(Pessoa *p)
{
    printf("NOME: %s\n", p->nome);
    printf("CPF: %s\n", p->cpf);
}
void liberaPessoa(Pessoa *p)
{
    free(p);
}