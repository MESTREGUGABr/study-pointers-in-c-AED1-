#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int option = 0;
int vav = 0;
int posi = 0;
int main() {

    struct lista *l1;

    l1 = (struct lista *) malloc(sizeof(struct lista));

    inicializar(&l1);
     do {
        printf("1 - Adicionar fim\n"
               "2 - Exibir lista\n"
               "3 - Exibe lista reversa\n"
               "4 - Adicionar inicio\n"
               "5 - Inserir em posicao\n"
               "6 - Inserir e ordenar lista\n"
               "7 - Quantidade de numeros primos\n"
               "8 - Elevar toda lista ao quadrado\n"
               "9 - Tamanho da lista\n"
               "10 - Soma de todos os elementos da lista\n"
               "11 - Buscar elemento na lista\n"
               "12 - Remover um item do final da lista\n"
               "13 - Remover um item do inicio da lista\n"
               "14 - Remover um item na posicao escolhida\n"
               "15 - Remover da lista o valor indicado\n"

               "16 - Sair\n ");
        printf("\n");
        scanf("%d", &option);
        printf("\n");

        switch(option){
        case(1):
            printf("Digite um valor que sera adicionado na lista:\n");
            scanf("%d", &vav);
            printf("\n");
            inserir_fim(&l1,vav);
            printf("\n");
            break;

        case(2):
            printf("Lista atual:\n");
            exibir(&l1);
            printf("\n");
            break;

        case(3):
            printf("Lista atual:\n");
            reverso(&l1);
            printf("\n");
            break;

        case(4):
            printf("Digite um valor que sera adicionado na lista:\n");
            scanf("%d", &vav);
            inserir_inicio(&l1,vav);
            printf("\n");
            break;

        case(5):
            printf("Digite um valor que sera adicionado na lista:\n");
            scanf("%d", &vav);
            printf("Digite a posicao que a qual o item sera adicionado na lista:\n");
            scanf("%d", &posi);
            inserir_posicao(&l1,vav,posi);
            printf("\n");
            break;

        case(6):
            printf("Digite um valor que sera adicionado na lista:\n");
            scanf("%d", &vav);
            inserir_ordem(&l1,vav);
            printf("\n");
            break;

        case(7):
            printf("Digite um valor que sera adicionado na lista:\n");
            qtdPrimos(&l1);
            printf("\n");
            break;

        case(8):
            quadrados(&l1);
            printf("\n");
            break;

        case(9):
            tamanho(&l1);
            printf("\n");
            break;

        case(10):
            somatorio(&l1);
            printf("\n");
            break;

        case(11):
            printf("Digite o valor que deseja procurar na lista:\n");
            scanf("%d",&vav);
            busca(&l1,vav);
            printf("\n");
            break;

        case(12):
            removerFim(&l1);
            printf("\n");
            break;

        case(13):
            removeInicio(&l1);
            printf("\n");
            break;

        case(14):
            printf("Digite a posicao que deseja remover na lista:\n");
            scanf("%d",&vav);
            removePosicao(&l1,vav);
            printf("\n");
            break;

        case(15):
            printf("Digite o valor que deseja remover na lista:\n");
            scanf("%d",&vav);
            removeValor(&l1,vav);
            printf("\n");
            break;

        case(16):
            printf("programa sendo fechado! Ate a proxima :D\n");
            saida();
        }


    } while(option != 16);

}
