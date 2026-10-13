#ifndef LISTAPESSOA_H
#define LISTAPESSOA_H

#include "pessoa.h"

typedef struct
{
    Pessoa **data;
    int qtd;
} ListaDePessoas;
ListaDePessoas *criaLista();
void addPessoaLista(ListaDePessoas *l, Pessoa* p);
void freeListaDePessoa(ListaDePessoas *l);
void imprimeListaPessoa(ListaDePessoas *l);
#endif