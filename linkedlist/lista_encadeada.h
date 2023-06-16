#ifndef LISTA_ENCADEADA_H
#define LISTA_ENCADEADA_H

typedef int tipo;

typedef struct no{
        int valor;
        struct no *proximo;
} no;

typedef no* lista;

lista inserir_fim(lista l, int valor);
lista inserir_inicio(lista l, int valor);
void exibir_lista( lista l);
void exibir_lista_r( lista l);
lista remover_fim (lista l);
lista remover_inicio(lista l);
lista inserir_posicao(lista l, int valor, int posicao);
lista remover_posicao(lista l, int posicao);
void somador (lista l);
void tamanho_lista(lista l);
lista elevar_quadrado(lista l);
void qtd_primo(lista l);











#endif
