#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

lista inserir_inicio(lista l, int valor){
    lista novo = (lista) malloc(sizeof(no));

    novo->valor = valor;
    novo->proximo = l;

    return novo;
}

void exibir_lista(lista l){
    lista aux = l;
    while(aux != NULL){
        printf("[%d]",aux->valor);
        aux = aux->proximo;
    }
}

void exibir_lista_reverso(lista l){
    if(l == NULL){}
    printf("\n");
    return ;

    exibir_lista_reverso(l->proximo);
    printf("[%d]", l->valor);
}

lista remover_inicio(lista l){
    if(l==NULL){
        return NULL;
    }
    lista aux = l ->proximo;
    free(l);
    return aux;
}

lista remover_fim (lista l){
    if(l==NULL){
        return NULL;
    }
    if(l->proximo == NULL){
        return remover_inicio(l);
    }

    lista aux = l;
    while(aux->proximo->proximo != NULL){
        aux = aux->proximo;
    }
    free(aux->proximo);
    aux->proximo=NULL;
    return l;
}

