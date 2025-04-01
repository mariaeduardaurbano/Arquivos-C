#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
//Inicio
int main(){
    setlocale(LC_ALL,"");
    int opcao, num, res;
    
    do{
        //Exibe o menu
        printf("\n---- Tabuada ---\n");
        printf("1 - Digite um número para conferir sua tabuada\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);
        
        switch(opcao){
            case 1: 
                printf("Informe um número:\n");
                scanf("%d", &num);
                printf("Tabuada do número %d\n", num);
                printf("%d * 0 = %d\n ", num, num*0);
                printf("%d * 1 = %d\n ", num, num*1);
                printf("%d * 2 = %d\n ", num, num*2);
                printf("%d * 3 = %d\n ", num, num*3);
                printf("%d * 4 = %d\n ", num, num*4);
                printf("%d * 5 = %d\n ", num, num*5);
                printf("%d * 6 = %d\n ", num, num*6);
                printf("%d * 7 = %d\n ", num, num*7);
                printf("%d * 8 = %d\n ", num, num*8);
                printf("%d * 9 = %d\n ", num, num*9);
                printf("%d * 10 = %d\n ", num, num*10);
            break;
            case 0:
            printf("Saindo...");
            break;
            default:
            printf("Opção inválida =( tente novamente!\n");
        }
    }while (opcao != 0);
    return 0;
    }
