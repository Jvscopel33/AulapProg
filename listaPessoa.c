#include <stdio.h>
#include <stdlib.h>
#include "pessoa.h"
#include "listaPessoa.h"

ListaDePessoas *criaLista()
{
    ListaDePessoas *l = (ListaDePessoas *)calloc(1, sizeof(ListaDePessoas));
    l->data = NULL;
    l->qtd = 0;
    return l;
}
void addPessoaLista(ListaDePessoas *l, Pessoa *p)
{
    l->data = realloc(l->data, (l->qtd + 1) * sizeof(Pessoa *));
    l->data[l->qtd] = p;
    l->qtd++;
}
void freeListaDePessoa(ListaDePessoas *l)
{
    for (int i = 0; i < l->qtd; i++)
    {
        liberaPessoa(l->data[i]);
    }
    free(l->data);
    free(l);
}
void imprimeListaPessoa(ListaDePessoas *l)
{
    for (int i = 0; i < l->qtd; i++)
    {
        imprimePessoa(l->data[i]);
    }
}