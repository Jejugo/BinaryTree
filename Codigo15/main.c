#include <stdio.h>
#include "ABB.h"

int main(void) {       
    ABB A;
    int opcao, k, res;
    
    criar(&A);
    
    printf("Entre com a acao desejada: 0 - sair, 1 - inserir, 2 - remover, 3 - buscar\n");
    printf("Sua opcao: ");
    scanf("%d",&opcao);
    while (opcao!=0) {          
          if (opcao==1) {
             printf("Digite a chave para inserir: ");
             scanf("%d",&k);
             res=inserir(&A,k);
             if (!res)
                printf("(erro ao inserir)\n");
             imprimir(A);
             printf("\n  %d \n", A->info);
             printf("\n");
          }
          else if (opcao==2) {
             printf("Digite a chave para remover: ");
             scanf("%d",&k);
             res=remover(&A,k);
             if (!res)
                printf("(erro ao remover)\n");
             imprimir(A);
             printf("\n");
          }
          else if (opcao==3) {
             printf("Digite a chave para buscar: ");
             scanf("%d",&k);
             res=buscar(A,k);
             if (!res)
                printf("(erro ao buscar)\n");
             imprimir(A);
             printf("\n");
          }
          else printf("\nOpcao invalida\n");
          
          printf("\nEntre com a acao desejada: 0 - sair, 1 - inserir, 2 - remover, 3 - buscar\n");
          printf("Sua opcao: ");
          scanf("%d",&opcao);
    }

    imprimir(A);
    printf("\n");
    finalizar(&A);
    system("pause");
    return 0;
}
