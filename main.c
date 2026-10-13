#include <stdio.h>
#include <stdlib.h>
#include "pessoa.h"
#include "listaPessoa.h"

int main()
{
    char cmd;
    int qtdPessoa = 0;
    ListaDePessoas *lista = criaLista();
    while (1)
    {
        scanf(" %c\n", &cmd);
        if (cmd == 'P')
        {
            Pessoa *p = lePessoa();
            addPessoaLista(lista, p);
        }
        else if (cmd == 'F')
        {
            break;
        }
    }
    imprimeListaPessoa(lista);
    freeListaDePessoa(lista);
    return 0;
}