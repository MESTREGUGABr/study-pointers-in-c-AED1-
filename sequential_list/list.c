#include <stdio.h>
#include <stdlib.h>
#include "list.h"

#define MAX 1000


void inicializar(struct lista *l) {
    l->particao = 0;
}

int inserir_fim(struct lista *l, int valor) {
    if(l->particao < MAX) {
        l->elementos[l->particao] = valor;
        l->particao++;
        return 1;
    } else {
        return 0;
    }
}

int inserir_inicio(struct lista *l, int valor) {
    int i;
    if(l->particao < MAX) {
        for(i=l->particao; i >0; i--) {
        l->elementos[i] = l->elementos[i-1];
        }

        l->elementos[0] = valor;
        l->particao++;

        return 1;
    } else {
        return 0;
    }
}

int exibir(struct lista *l){
    if(l->particao == 0){
        printf("Lista vazia!");
        printf("\n");
        return 0;
    }
    int i;
    for(i=0; i < l->particao; i++) {
        printf("[%d]", l->elementos[i]);
    }
    printf("\n");
    return 1;
}

int reverso(struct lista *l){
     if(l->particao == 0){
        printf("Lista vazia!");
        printf("\n");
        return 0;
    }

    for (int i = l->particao-1; i >= 0; i--) {
        printf("[%d] ", l->elementos[i]);
    }
    printf("\n");
    return 1;
}

int inserir_posicao(struct lista *l, int valor, int posicao){

    if(l->particao >= MAX ){
        printf("Lista cheia!");
        printf("\n");
        return 0;
    }

    for(int i = l->particao - 1; i >= posicao-1; i--){
        l->elementos[i+1] = l ->elementos[i];
    }
    l->elementos[posicao-1] = valor;
    l->particao++;
    return 1;
}

int inserir_ordem(struct lista *l, int valor){
    int temp;

    if(l->particao >= MAX){
        return 0;
    }
    l->elementos[l->particao] = valor;
    l->particao++;

    for(int i = 0; i < l->particao;i++){
        for(int j = 0; j < l->particao - 1;j++){

        if(l->elementos[j] > l->elementos[j+1]){

            temp = l->elementos[j];
            l->elementos[j] = l->elementos[j+1];
            l->elementos[j+1] = temp;

            }
        }
    }
    return 1;
}

//ehPrimo é uma função pra verificar se o numero é primo
int ehprimo(int numero){
    if(numero <= 1){
        return 0;
    }
    for(int i = 2; i*i <= numero;i++){
        if(numero%i==0){
            return 0;
        }
    }
    return 1;
}

int qtdPrimos(struct lista *l){
    int quantPrimos = 0;
    for(int i = 0; i < l->particao;i++){
            if(ehprimo(l->elementos[i])){
                quantPrimos++;
            }
        }

    printf("A quantidade de primos eh : %d", quantPrimos);
    printf("\n");
}

int quadrados(struct lista *l){
    if(l->particao == 0){
        printf("A lista esta vazia, nao ha numeros para elevar ao quadrado.\n");
        return 0;
    }
    for(int i = 0; i < l->particao; i++){
        l->elementos[i] = l->elementos[i]*l->elementos[i];
    }
    printf("Os numeros foram elevados ao quadrado!\n");
    return 1;
}

int tamanho(struct lista *l){
int tam = l->particao;
printf("Tamanho da lista: |%d| ", tam);
printf("\n");

}

int somatorio(struct lista *l){
    int soma = 0;
for(int i = 0; i < l->particao;i++){
    soma+=l->elementos[i];
}
printf("Soma de todos os elementos da lista: |%d|",soma);
printf("\n");
}

int busca(struct lista *l, int valor){
    if(l->particao == 0){
            printf("A lista esta vazia! Nao existem valores para ser procurados");
            printf("\n");
            return -1;
        }
    for(int i = 0; i < l->particao;i++){

            if(l->elementos[i] == valor){
            printf("Elemento esta na posicao: %d", i+1);
            printf("\n");
        } else {
            printf("O numero nao existe na lista!\n");
            return -1;
        }
    }
}

int removerFim (struct lista *l){
   if(l->particao == 0){
        printf("Lista esta vazia!");
    return 0;
   }
   l->particao--;
   return 1;
}

int removeInicio (struct lista *l){
    if(l->particao == 0){
        printf("Lista esta vazia!");
        printf("\n");
        return 0;
    }
    for(int i = 0; i < l->particao; i++){
        l->elementos[i] = l->elementos[i + 1];
    }
    l->particao--;
    return 1;
}

int removePosicao (struct lista *l, int valor){

     if (l->particao == 0){
        printf("A lista esta vazia\n");
        return 0;
    }
     else if(valor < 0 || valor >= l->particao){
            printf("A posicao indicada nao existe na lista, tente novament!\n");
            return 0;
    }
    for (int i = valor-1; i < l->particao; i++){
        l->elementos[i] = l->elementos[i + 1];
    }
    l->particao--;
    return 1;
}

int removeValor(struct lista *l, int valor){
    for(int i =0; i <= l->particao;i++){
        if(l->elementos[i] == valor){
            for(int z = i; z < l->particao; z++){
                l->elementos[z] = l->elementos[z + 1];
            }
        } else if (l->particao == 0){
            printf("Lista esta vazia!\n");
        }
        else {
            printf("Numero nao encontrado na lista!\n");
            return 0;
        }
    }
    l->particao--;
    return 1;
}


void saida(){
    exit(0);
}





