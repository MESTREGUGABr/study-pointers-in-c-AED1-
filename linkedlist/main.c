#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"
int op;
int vav = 0;
int posi = 0;
int main() {

    //declaração da lista
    lista l1 = NULL;

    do {
        printf("1 - Adicionar inicio\n"
               "2 - Adicionar fim\n"
               "3 - \n"
               "4 - \n"
               "5 - Exibir lista\n"
               "6 - Exibir lista reversa\n"
               "7 - Remover inicio\n"
               "8 - Remover fim\n"
               "9 - Remover posicao\n"
               "10 - Remover valor\n"
               "11 - Buscar valor\n"
               "12 - Somar lista\n"
               "13 - Tamanho da lista\n"
               "14 - Elevar lista ao quadrado\n"
               "15 - Quantidade de n primos na lista\n"
               "16 - Sair\n ");

        printf("\n");
        scanf("%d", &op);
        printf("\n");

        switch(op){

        case(1):
            printf("Digite um valor que sera adicionado na lista:\n");
            scanf("%d", &vav);
            printf("\n");
            l1 = inserir_inicio(l1,vav);
            printf("\n");
            break;

        case(2):
            printf("Digite um valor que sera adicionado no fim da lista:\n");
            scanf("%d", &vav);
            printf("\n");
            l1 = inserir_fim(l1,vav);
            printf("\n");
            break;

        case(3):
            printf("Digite um valor que sera adicionado na lista e"
                   "a posicao que ele sera colocado:\n");
            scanf("%d", &vav);
            printf("\n");
            scanf("%d", &posi);
            printf("\n");
            l1 = inserir_posicao(l1,vav,posi);
            printf("\n");
            break;


        case(5):
            exibir_lista(l1);
            printf("\n");
            break;

        case(6):
            exibir_lista_r(l1);
            printf("\n");
            printf("\n");
            break;

        case(7):
            l1 = remover_inicio(l1);
            printf("\n");
            break;

        case(8):
            remover_fim(l1);
            printf("\n");
            break;

        case(9):
            printf("Digite a posicao que deseja remover: \n");
            scanf("%d", &posi);
            printf("\n");
            l1 = remover_posicao(l1,posi);
            printf("\n");
            break;

        case(10):
            printf("Digite o valor que sera removido: \n");
            scanf("%d", &vav);
            printf("\n");
            l1 = remove_valor(l1,vav);
            printf("\n");
            break;

        case(11):
            printf("Digite o valor que deseja buscar: \n");
            scanf("%d", &vav);
            printf("\n");
            procurar(l1,vav);
            printf("\n");
            break;

        case(12):
            somador(l1);
            printf("\n");
            break;
        case(13):
            tamanho_lista(l1);
            printf("\n");
            break;
        case(14):
            elevar_quadrado(l1);
            printf("\n");
            break;

        case(15):
            qtd_primo(l1);
            printf("\n");
            break;

        case(16):
            printf("programa sendo fechado! Ate a proxima :D\n");
            exit(0);
        }


    } while(op != 16);

    exit(0);
}
