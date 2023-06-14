#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

int main() {

    //declaração da lista
    lista l1 = NULL;

    l1 = inserir_inicio(l1, 98);
    l1 = inserir_inicio(l1, 3);
    l1 = inserir_inicio(l1, 9);

    exibir_lista(l1);

    l1 = inserir_posicao(l1, 10, 3);

    exibir_lista(l1);


    exit(0);
}
