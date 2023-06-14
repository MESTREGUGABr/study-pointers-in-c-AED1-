#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

lista inserir_inicio(lista l, int valor) {
    lista novo = (lista) malloc(sizeof(no));
    novo->valor = valor;
    novo->proximo = l;
    return novo;
}

void exibir_lista(lista l){
    lista aux = l;
    while(aux != NULL) {
        printf("[%d]", aux->valor);
        aux = aux->proximo;
    }
    printf("\n");
}

void exibir_lista_r(lista l){
    if(l == NULL) {
        printf("\n");
        return ;
    }
    exibir_lista_r(l->proximo);
    printf("[%d]", l->valor);
}

lista inserir_fim(lista l, int valor) {
    lista aux = l;
    if(l == NULL) {
        return inserir_inicio(l, valor);
    }
    while(aux->proximo != NULL) {
        aux = aux->proximo;
        }
    lista novo = (lista) malloc(sizeof(no));
    novo->valor = valor;
    novo->proximo = NULL;
    aux->proximo = novo;
    return l;
}

lista remover_inicio(lista l) {
    if(l==NULL)
        return NULL;
    lista aux = l->proximo;
    free(l);
    return aux;
}

lista remover_fim(lista l) {
    if(l==NULL)
        return NULL;

    if(l->proximo == NULL)
       return remover_inicio(l);

    lista aux = l;
    while(aux->proximo->proximo != NULL) {
        aux = aux->proximo;
    }
    free(aux->proximo);
    aux->proximo = NULL;
    return l;
}

lista inserir_posicao(lista l, int valor, int posicao){

    if(posicao < 0){
        return l;
    }

    lista aux = l;
    lista novo = (lista) malloc(sizeof(no));
    novo->valor = valor;
    novo->proximo = NULL;

    if(posicao == 0){
        novo->proximo = l;
        return novo;
    }

    posicao--;

    while(posicao != 1){
        aux = aux->proximo;
        posicao--;

    }

    novo->proximo = aux->proximo;
    aux->proximo = novo;
    return l;
}



