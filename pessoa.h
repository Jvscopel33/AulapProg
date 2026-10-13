#ifndef PESSOA_H
#define PESSOA_H

#define MAX_TAM_NOME 50
#define MAX_TAM_CPF 18

typedef struct
{
    char nome[MAX_TAM_NOME];
    char cpf[MAX_TAM_CPF];
} Pessoa;

Pessoa *criaPessoa(char *nome, char *cpf);
Pessoa *lePessoa();
void imprimePessoa(Pessoa *p);
void liberaPessoa(Pessoa *p);

#endif