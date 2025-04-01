#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
//Inicio
int main(){
    setlocale(LC_ALL,"");
    int opcao;
    float saldo, deposito, res, saque;
    
     do{
        //Exibe o menu
        printf("\n---- Banco SENAI ---\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Depositar dinheiro\n");
        printf("3 - Sacar dinheiro\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);
        
        switch(opcao){
            case 1:
                printf("Seu saldo é de: 1000 SENAI coins\n");
                break;
            case 2:
                printf("Informe o valor desejado para o depósito:\n");
                scanf("%f", &deposito);
                saldo = 1000;
                res = saldo + deposito;
                printf("Seu saldo agora é de:%.2f SENAI coins\n", res);
                break;
            case 3:
            printf("Informe o valor do saque:\n");
                scanf("%f", &saque);
                res = saldo - saque;
                printf("Seu saldo agora é de: %.2f SENAI coins\n", res);
                 if(saque < saldo){
                    printf("Saque válido =)");
                } 
                else{
                    printf("Saque inválido =( tente outro valor!\n");
                }
                break;
            case 0:
            printf("Saindo...\n");
            break;
           
            default:
            printf("Opção inválida =( tente novamente!\n");
        }
        
    }while (opcao != 0);
    return 0;
}
