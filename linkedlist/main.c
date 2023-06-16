#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

int main() {

    //declaração da lista
    lista l1 = NULL;

    l1 = inserir_inicio(l1, 98);
    l1 = inserir_inicio(l1, 3);
    l1 = inserir_inicio(l1, 9);
    l1 = inserir_inicio(l1, 20);
    l1 = inserir_inicio(l1, 1);
    l1 = inserir_inicio(l1, 2);

    exibir_lista(l1);

    qtd_primo(l1);


    exit(0);
}
