#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#define MAX 100

struct lista{
    int elementos [MAX];
    int particao;
};

void inicializar (struct lista *l);
int exibir(struct lista *l);
int reverso(struct lista *l);
int inserir_fim(struct lista *l, int valor);
int inserir_inicio(struct lista *l, int valor);
int inserir_posicao(struct lista *l, int valor, int posicao);
int inserir_ordem(struct lista *l, int valor);
int qtdPrimos(struct lista *l);
int quadrados(struct lista *l);
int tamanho(struct lista *l);
int somatorio(struct lista *l);
int busca(struct lista *l, int valor);
int removerFim (struct lista *l);
int removeInicio (struct lista *l);
int removePosicao (struct lista *l, int valor);
int removeValor(struct lista *l, int valor);









#endif

